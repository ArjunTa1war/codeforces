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
   ll n,m;
   cin>>n>>m;
   ll prevt = 0,mini=m,maxi=m;
   int chk = 0;
   for (int i = 0; i < n; i++){
     ll t,l,u;
     cin>>t>>l>>u;
     ll d = t-prevt;
     if(mini-d>u)chk=1;
     if(maxi+d<l)chk=1;
     mini = max(l,mini-d);
     maxi = min(u,maxi+d);
     prevt = t;
   }
   if(chk==1)return void(cout<<"NO\n");
   cout<<"YES\n";
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
/*it is just a problem where we are to keep the record of prev 
lowest temp possible prev highest tem possible and prev time 
and if we we cannot reach the desired range in any step then we
are to print no there and if we can always reach the desired range 
[li,hi] between this then cout<<"YES" :)*/