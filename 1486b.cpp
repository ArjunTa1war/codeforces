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
   ll n,ans1=1,ans2=1;
   cin>>n;
   vector<ll>x(n),y(n);
   for (int i = 0; i < n; i++){
     cin>>x[i];
     cin>>y[i];
   }
   sort(all(x));
   sort(all(y));
   int sz1 = x.size();
   int sz2 = y.size();
   ans1 = x[sz1/2]-x[(sz1-1)/2]+1;
   ans2 = y[sz2/2]-y[(sz2-1)/2]+1;
   cout<<ans1*ans2<<"\n";
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
/*it requires some knowledge of median now first convert then 2d array
to two one d array
now for all x there must be some points where the result is minimum
we are to check those points
same for all y there must be some points where the result is minimum
we are to check those points
now if at any place we are to make exhibition we are only to chose the positions
where sum of x is least and sum of y is least now we are just to multiply
those points 
that is number of choices where x can go * number of choices where y can 
go :) */