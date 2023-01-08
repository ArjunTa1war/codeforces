#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
   ll n,m;
   cin>>n>>m;
   vector<pair<int,pair<int,int>>>v;
   for (int i = 0; i < m; i++){
       int x,w;
       cin>>x>>w;
       v.pb({w,{x,i+1}});
   }
   sort(v.begin(),v.end());
   ll sum = 0;
   vector<pair<int,int>>v2;
   for (int i = 0; i < 2*n; i++) {
       sum+=v[i].ff;
       v2.pb({v[i].ss.ff,v[i].ss.ss});
   }
   cout<<sum<<"\n";
   sort(v2.begin(),v2.end());
   for (int i = 0; i < n; i++){
       cout<<v2[i].ss<<" "<<v2[(2*n)-i-1].ss<<"\n";
   }
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
/*now we know that if the weight should be least it means we are just
to take the smallest values only and when we know all those weights
we are to take those of x(coordinate)only 
now make x in order as we are to make the nested segments
and we are to take (coordinates) like end one is connected with 
first one and so on now we are also to keep the index of m with 
us and thus we can get the answer easily :)*/