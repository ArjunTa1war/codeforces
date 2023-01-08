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
   ll n,cnt=0;
   cin>>n;
   vector<ll>v1(n),v2(n),dp1(n),dp2(n);
   for(auto &it : v1)cin>>it;
   for(auto &it : v2)cin>>it;
   for (int i = n-1; i >=0; i--)cnt+=v1[i],dp1[i]=cnt;
   cnt=0;
   for (int i = 0; i < n; i++)cnt+=v2[i],dp2[i]=cnt;
   ll ans = 1e9;
   for (int i = 0; i < n; i++){
      ll a=0,b=0;
      if(i!=0)a = dp2[i-1];
      if(i!=n-1)b = dp1[i+1];
      ans = min(ans,max(a,b));
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
/*this question is simple we are just to find the path which is max
for the case of alice and take the minimum path for bob
now for the case of bob we can use either 1st column element or 2nd column
element 
x x x x y y
y y y x x x suppose alice went down at i = 3 then bob can either
collect the  upper y points or lower y points and we are just to
find the minimum of them as alice turn is first so he will decide what
should be the minimum :)*/