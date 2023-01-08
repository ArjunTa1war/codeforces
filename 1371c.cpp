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
   ll a,b,n,m;
   cin>>a>>b>>n>>m;
   if(a+b>=n+m&&m<=min(a,b)){
       cout<<"YES\n";
       return;
   }
   cout<<"NO\n";
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
/* there are only two cases in which a guest can get sad that is
if the total number of cookies are less than the number of people 
and the 2nd condition is the no. of cookies which are less in number
are less than the m kind of persons :) */