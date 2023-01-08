#ifdef LOCAL
#include "arjun.hpp"
#else
#include <bits/stdc++.h>
using namespace std;
#define dbg(...)
#endif
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)

void solve(){
  ll num = 1001;
  vector<vector<ll>>dp(num,vector<ll>(num));
  vector<vector<ll>>prefix_sum(dp);
  ll n,q;
  cin>>n>>q;
  vector<pair<int,int>>vp(n);
  for (int i = 0; i < n; i++){
     ll a,b;
     cin>>a>>b;
     dp[a][b] += (a*b);
  }
 
  for (int i = 1; i <num; i++){
    for (int j = 1; j <num; j++){
        prefix_sum[i][j]=dp[i][j]+prefix_sum[i-1][j]+prefix_sum[i][j-1]-prefix_sum[i-1][j-1];
    }
}
  for (int i = 0; i < q; i++){
    ll h1,w1,h2,w2;
    cin>>h1>>w1>>h2>>w2;
    h2--,w2--,h1++,w1++;
    ll temp = prefix_sum[h2][w2]-(prefix_sum[h2][w1-1]+prefix_sum[h1-1][w2])+prefix_sum[h1-1][w1-1];
    cout<<max(0LL,temp)<<"\n";
  }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*it is also a basic prefix sum problem and here all we have to do is find the
difference between two prefix sums :)*/