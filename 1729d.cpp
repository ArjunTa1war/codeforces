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
   vector<int>x(n),y(n),d(n);
   for(auto &it : x)cin>>it;
   for(auto &it : y)cin>>it;
   for (int i = 0; i < n; i++)d[i] = y[i]-x[i];
   sort(all(d));
   int ans= 0,i=0,j=n-1;
   while (i<j){
     if(d[j]+d[i]>=0)ans++,i++,j--;
     else i++;
   }
   cout<<ans<<"\n";
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
/*perfect way is to make the pair of greater and smaller :)*/