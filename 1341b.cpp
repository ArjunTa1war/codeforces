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
   ll n,k;
   cin>>n>>k;
   vector<ll>v(n+1),dp(n+2,0);
   for (int i = 1; i <= n; i++)cin>>v[i];
   dp[0]=dp[1]=0;
   ll cnt = 0;
   for (int i = 2; i <= n-1; i++){
     if(v[i]>v[i-1]&&v[i]>v[i+1])cnt++;
     dp[i] = cnt;
   }
   dp[n] = cnt;
   ll maxi = 0,l=1;
   for (int i = 1; i <=(n-k)+1; i++){
        ll chk = dp[i+k-2]-dp[i];
        if(chk>maxi){
            l = i;
            maxi = chk;
        }
   }
   cout<<maxi+1<<" "<<l<<"\n";
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
/*it is a simple execution problem and nothing more than that
we are to check for every integer and check how many peaks comes
in between i+1 and i+k-1 an that's all and we can check it by
sum[i+k-2] that is the n-1 element of the segment and sum[i]
and thus we are to keep on checking the condition and hence we can
get the answer :)*/