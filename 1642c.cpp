#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
   ll n,x;
   cin>>n>>x;
   map<ll,ll>mp;
   vector<ll>v(n);
   for(auto &x : v)cin>>x;
   sort(v.begin(),v.end());
   for (int i = 0; i < n; i++)
   {
       ll a = v[i];
       if(a%x==0&& mp.find(a/x)!=mp.end()){
           mp[a/x]--;
           if(mp[a/x]==0)mp.erase(a/x);
       }
       else mp[a]++;
   }
     ll ans = 0;
     for(auto &x : mp)ans+=x.ss;
     cout<<ans<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*main approach is make a map and keep on decreasing the value 
mp[a[i]/x] if available else add a[i] to the map now we are to check
the number of integers left in the map after the whole process
and there can be more than integer of same kind that's why we are to
add mp.ss :)*/