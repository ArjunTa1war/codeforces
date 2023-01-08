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
   string s;
   cin>>s;
   int n = s.size();
   long long ans = 0;
   vector<vector<int>>dp(n+1,vector<int>(2));
   for (int i = 1; i <=n; i++){
     if(s[i-1]=='?'){
        dp[i][0]+=dp[i-1][1]+1;
        dp[i][1]+=dp[i-1][0]+1;
     }
     else if(s[i-1]=='1'){
        dp[i][1]+=dp[i-1][0]+1;
        dp[i][0]=0;
     }
     else{
        dp[i][0]+=dp[i-1][1]+1;
        dp[i][1]=0;
     }
     ans+=max(dp[i][0],dp[i][1]);
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
/*here dp[i] is returing the length of beautiful substring till
the length i and in the end we are to do summation of all the dp's
but in here dp[i][0] means that what will be the dp[i] if the number
at ith position is 0 and same with 0 and here we need to care that
for i-1 we are defining it in dp[i] in order to less the calculation
so this was all :)*/