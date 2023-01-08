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
   int n,k;
   cin>>n>>k;
   vector<int>v(n);
   map<int,vector<int>>mp;
   for (int i = 0; i < n; i++){
        cin>>v[i];
        if(mp[v[i]].size()<k)mp[v[i]].pb(i);
   }
   for(auto &x : v)x=0;
   int valid = 0;
   for(auto &x : mp)valid+=x.ss.size();
   valid-=(valid%k);
   int cnt = 0;
   for(auto &x : mp){
      for(auto &y : x.ss){
        v[y]=++cnt;
        cnt%=k;
        valid--;
        if(valid==0){
            for(auto &x : v)cout<<x<<" ";
            cout<<"\n";
            return;
        }
      }
   }
  for(auto &x : v)cout<<x<<" ";
  cout<<"\n";
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
/*All we need to do is take some points in the mind
1. all colours should be used
2. all colours should be present in same amount
3. a single number cannot have two colours 
and that's all 
valid-valid%k is doing the thing that it is the maximum possible value before
valid to be multiplied by k :)*/