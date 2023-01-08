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
  ll n;
  cin>>n;
  vector<ll>a(n),b(n),c(n+1);
  for(auto &x : a)cin>>x;
  for (int i = 0; i < n; i++){
     cin>>b[i];
     c[b[i]/2] = i;
  }
  ll mini = c[n];
  for (int i = n; i >=1; i--){
      mini = min(c[i],mini);
      c[i] = mini;
  }
  ll ans = 1e9;
  for (int i = 0; i < n; i++){
     ans = min(i+c[a[i]/2+1],ans);
  }
  cout<<ans<<"\n";
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
/*question is quite simple we are just to find the minimum number of swaps
such that the element at first position in a is less than the b
what we can do is we can check for
1st element of a ,2nd element of a,...... that minimum index where any
b[i]>a is occuring and then we are to add the i+j and that's all where
j is the minimum index of occurence of any b[i]>a[i] :)*/