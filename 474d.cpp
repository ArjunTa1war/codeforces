#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k; 
    vector<ll>dp(100001,0),ans(100001,0);
    dp[0] = 1;
    for (int i = 1; i <= 100000; i++){
       dp[i]+=1;
       if(i>=k)dp[i] = (dp[i-1]+dp[i-k])%M;
    }
    for (int i = 1; i <=100000; i++){
          ans[i]+=(dp[i]+ans[i-1])%M;
    }
    for (int i = 0; i < n; i++){
        ll a,b;
        cin>>a>>b;
        cout<<(ans[b]-ans[a-1]+M)%M<<"\n";
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
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}