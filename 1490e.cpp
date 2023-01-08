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
   vector<ll>v(n+1),sum(n+1);
   set<ll>st;
   map<int,vector<int>>mp;
   for (int i = 1; i <= n; i++)cin>>v[i],mp[v[i]].pb(i);
   sort(all(v));
   for (int i = 1; i <= n; i++)sum[i]+=(sum[i-1]+v[i]);
   int ind = -1;
   for (int i = 0; i <= n-1; i++)if(sum[i]<v[i+1])ind = i;
   if(ind==-1){
     for (int i = 1; i <=n; i++)cout<<i<<" ";
     cout<<"\n";
     return;
   }
   ll least  = v[ind];
   if(v[ind]==v[ind+1])least--;
   for (int i = 1; i <=n; i++){
     if(v[i]==v[i-1])continue;
     if(v[i]>least){
        for(auto & x : mp[v[i]])st.insert(x);
     }
   }
   cout<<st.size()<<"\n";
   for(auto &x : st)cout<<x<<" ";
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
/*it is quite simple we are just to find the least number of tokens which
can help the player to win so we can find this by using sum till the n tokens
if the sum[i]<v[i+1] then the number i can never win in his entire life
so we are just to find that last index edge case suppose the case is
v[i] = 3 and v[i+1] = 3 and the index = i that is at token = 3 the player
will lose but on the other hand other person with 3 is winning so we are to
make the least number one less :)*/