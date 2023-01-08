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
   vector<ll>v(n);
   for(auto &x : v)cin>>x;
   vector<ll>dp(n+1,-1e9);
   dp[0]=0;
   for (int i = 0; i < n; i++)
   {   ll sum = 0;
       for (int j = i; j < n; j++)
       {
           sum+=v[j];
           dp[j-i+1] = max(dp[j-i+1],sum);
       }
   }
   vector<ll>ans(n+1);
   for (ll i = 0; i <= n; i++)
   {
     for (ll j = 0; j <= n; j++)
     {  
         ans[i] = max(ans[i],(dp[j]+min(j,i)*x));
     }
   }
   for(auto &x : ans)cout<<x<<" ";
   cout<<"\n";
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
/*we are to use dynamic approach here we are to calculate the max sum we can get
by using i digits now dp[i] gives the max sum we can get of length i
now if x = 0 we can take sum of any length but we can only multiply it by
min(i,j) because i here gives the max number of times we can use x and j here
gives the length of array we are taking :)*/