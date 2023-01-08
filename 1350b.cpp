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
   int n;
   cin>>n;
   vector<ll>arr(n+1,0),dp(n+1,1);
   for (int i = 1; i <= n; i++)cin>>arr[i];
   for (int i = 1; i <=n/2; i++){
      for (int j = 2*i; j<=n ; j+=i){
          if (arr[i]<arr[j]) {
              dp[j]=max(dp[j],dp[i]+1);
          }
      }
   }
  ll maxi = *max_element(all(dp));
  cout<<maxi<<"\n";
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
/*it is a dp solution in this we are to count the max length of string
till any given number and thus when we are to start anything from that
element we will be having the max possible length of the string :)*/