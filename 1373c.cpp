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
   string s;
   cin>>s;
   vector<ll>v,dp;
   for (int i = 0; i < s.length(); i++){
      if(s[i]=='+')v.pb(1);
      else v.pb(-1);
   }
   int num = 0;
   for (int i = 0; i < s.length(); i++){
      num+=v[i];
      dp.pb(num);
   }
   ll ans = s.length();
   int mini = 0;
   for (int i = 0; i < s.length(); i++)if(dp[i]<mini)ans+=(i+1),mini=dp[i];
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
/*it is a problem of observation and in this question we are just to
calculate the sum till every element after coverting the string in the
form of 1 and -1 only
if the value of curr is good enough that it can satisfy all conditions
then return the value and in the beginning we have used ans+=s.length()
because suppose the forloop does not satisfy the condition dp[i]<min
then all the elements need to be printed :)*/