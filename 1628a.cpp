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
   vector<ll>v(n),ans;
   map<ll,ll>mp;
   for(auto &x : v)cin>>x,mp[x]++;
   ll mexi = 0;
   set<ll>st;
   for (int i = 0; i < n; i++){
       mp[v[i]]--;
       st.insert(v[i]);
       while (st.find(mexi)!=st.end())mexi++;
       if(mp[mexi]==0){
        st.clear();
        ans.pb(mexi);
        mexi = 0;
       }
   }
   cout<<ans.size()<<"\n";
   for(auto &x : ans)cout<<x<<" ";
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
/*question is simple but i couldn't figure out here we are
to go one by one and check the mex value till that place and
if that mex value is already present somewhere in the suffix
then keep on going otherwise stop and push to the answer :)*/