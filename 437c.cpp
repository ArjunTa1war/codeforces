#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

void solve()
{
   int n,m;
   cin>>n>>m;
   map<int,int>mp;
   for (int i = 1; i <= n; i++){
       int num;cin>>num;
       mp[i]=num;
   }
   ll ans = 0;
   for (int i = 0; i < m; i++){
      int a,b;
      cin>>a>>b;
      ans+=min(mp[a],mp[b]);
   }
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
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*we are given the energy required to separate any node from i
v[1]energy required to separate any node from 1 and so on 
we are given m ropes suppose a b now we are to check the v[a]
and v[b] that is energy required to seperate from a and energy
required to seperate from b and we are to choose minimum of it :)*/