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
   ll n;
   cin>>n;
   ll ans = 0;
   ll zsum = 0;
   vector<ll>v(2*n);
   for(auto &x : v){
     cin>>x;
     ans+=abs(x+1);
     zsum+=abs(x);
   }
   if(n==1)zsum = min(zsum,abs(v[0]-v[1]));
   if(n==2){
      ll temp = 0;
      for(auto &x : v)temp+=abs(x-2);
      zsum  = min(temp,zsum);
   }
   if(n%2==0){
       for(auto &x : v){
           zsum = min(zsum,ans-abs(x+1)+abs(x-n));
       }
   }
   cout<<zsum<<"\n";
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
/*the good sequence is either 0 0 0 0 0 or -1 -1 -1 n/2 for all n%4 :)*/