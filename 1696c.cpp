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

vector<pair<int,ll>> expand(vector<ll>&v,int m){
   vector<pair<int,ll>>an,ans;
   int sz = v.size();
   for (int i = 0; i <sz ; i++){
      ll f=v[i],s=1;
      while (f%m==0){
        f/=m;
        s*=m;
      }
      an.pb({f,s});
   }
   for (int i = 0; i < sz; i++){
    ll fir = an[i].ff;
    ll sec = an[i].ss;
    while (i<sz-1&&an[i].ff==an[i+1].ff){
       sec+=an[i+1].ss;
       i++;
    }
    ans.pb({fir,sec});
   }
   return ans;
}
void solve(){
   int n,m,k;
   cin>>n>>m;
   vector<ll>a(n);
   for(auto &x : a)cin>>x;
   cin>>k;
   vector<ll>b(k);
   for(auto &x : b)cin>>x;
   if(expand(a,m)==expand(b,m))return void(cout<<"YES\n");
   cout<<"NO\n";
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
/*it is quite simple we are just to maximize the array to max possible way 
that is if the element is divisible by m then keep on dividing it by m
unitil it is no longer divisible by m then we are to check how many
times the number will occur in the whole vector :)*/