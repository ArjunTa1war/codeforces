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
   int n;
   cin>>n;
   vector<int>v(n);
   for(auto &x : v)cin>>x;
   vector<pair<int,int>>dif;
   for (int i = 1; i < n; i++){
       if(v[i]-v[i-1]<0)dif.push_back({v[i-1]-v[i],i+1});
   }
   sort(all(dif));
   for (int i = 0; i < n-dif.size(); i++)cout<<"1 ";
   for(auto &x : dif)cout<<x.second<<" ";
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
/* The solution is quite simple in the solution we can notice that
solution is always valid and we can change the array to increasing
type in every case and thus we can do this :)*/