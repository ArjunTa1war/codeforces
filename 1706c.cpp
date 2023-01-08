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
   ll n;
   cin>>n;
   vector<ll>v(n),dp(n);
   for(auto &x : v)cin>>x;
   ll ans = 0;
   for (int i = 1; i < n-1; i++){
      ll a = max(v[i-1]-v[i],v[i+1]-v[i]);
      if(a>=0)dp[i]+=(a+1);
   }
   if(n&1){
     for (int i = 1; i < n-1; i+=2)ans+=dp[i];
     return void(cout<<ans<<"\n");
   }
   ans=0;
   for (int i = 2; i < n-1; i+=2)ans+=dp[i];
   ll optimal = ans;
   for (int i = 2; i <n-1 ; i+=2){
        ans-=dp[i];
        ans+=dp[i-1];
        optimal = min(ans,optimal);
   }
   cout<<optimal<<"\n";
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
/*the question is quite simple for odd n as there is only one option
there that the peaks would be in 1 3 5 .... n-1 but in even there are
many options in n = 8 we can take
1 3 5 , 2 4 6 , 1 3 6 ,1 4 6 and thus we are to fidn the minimum of it
we can do this by first finding the 2 4 6 then we are to start from the
2 and keep on adding two replace the dp[i] with dp[i-1] and then check the
answer :)*/  