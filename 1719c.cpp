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

void solve()
{
  int n,q;
  cin>>n>>q;
  vector<ll>v(n);
  for(auto &x : v)cin>>x;
  vector<ll>dp;
  int maxi = 0;
  for (int i = 1; i < n; i++){
     if(v[i]>v[maxi]){
        dp.pb(i);
        maxi = i;
     }
     else dp.pb(maxi);
  }
  for (int i = 0; i < q; i++){
    ll a,b;
    cin>>a>>b;
    a--;
    b--;
    ll f = upper_bound(all(dp),a)-dp.begin();
    ll s = lower_bound(all(dp),a)-dp.begin();
    f--;
    if(b<s||s==n-1)cout<<"0\n";
    else if(f==n-2){
        cout<<(b+1)-s<<"\n";
        continue;
    }
    else if(b<=f)cout<<b-s+1<<"\n";
    else cout<<f-s+1<<"\n";
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
/*quite simple approach as if we notice once the maximum element appears then
always it will win now the vector dp is in increasing order so we are just to 
count the number of times the index a is present in between the index 
(0,max(b,(final pos of a))) thus this is the solution :)*/