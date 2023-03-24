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


int binaryExpo(int a,int b,int m){
   int ans = 1;
   while(b){
    if(b&1)ans=(ans*1LL*a)%m;
    a=(a*1LL*a)%m;
    b>>=1;
   }
   return ans;
}

void solve()
{
   int n;
   cin>>n;
   map<int,int>mp;
   int a = 1;
   for(int i = 0;i<n;i++){
     int num;
     cin>>num;
     a = (a*1LL*num)%M;
     mp[num]++;
   }
   int b = 1;
   bool chk = true;
   for(auto &x : mp){
    if(x.ss&1&&chk){
      chk = false;
      x.ss/=2;
    }
    b = (b*1LL*(1+x.ss))%(M-1);
   }
   int ans = binaryExpo(a,b,M);
   if(!chk)return void(cout<<ans);
   int sq = 1;
   for(auto &x : mp){
      if(x.ss&1)return void(cout<<ans<<"\n");
      sq = (sq*1LL*(binaryExpo(x.first,x.second/2,M)))%M;
   }
   ans = binaryExpo(sq,b,M);
   cout<<ans;
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
    t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}