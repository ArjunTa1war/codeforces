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
   ll n,a,b,ans=1e18;
   cin>>n>>a>>b;
   vector<ll>v(n+1,0),sum(n+1,0);
   for (int i = 1; i <= n; i++)cin>>v[i],sum[i]=sum[i-1]+v[i];
   for (int i = 0; i < n; i++){
      ll num = b*v[i]+a*v[i]+b*(sum[n]-sum[i]-(n-i)*v[i]);
      ans = min(ans,num);
   }
   cout<<ans<<"\n";
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
/*question is simple we are just to check the last position of the capital
as before the capital the total cost before it will just be
b*(pos1-0)+b*(pos2-pos1)..... we can write it as b*v[i] it is because
we are increasing the capital also that's why we are not to take difference from
0 always now the charge of moving capital is (a*v[i]) and hence a*v[i]+b*v[i] is
added now we are to calculate for the rest of the numbers we can do it by
b*(pos1-capital)+(pos2-capital)..........) that is sum of pos - total capitals
b*(sum[n]-sum[i]-(n-i)v[i]) and hence we are just to store the minimum of them :)*/