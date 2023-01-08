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
   ll n;
   cin>>n;
   string s;
   cin>>s;
   s.pb('*');
   ll ans = 0;
   vector<char>v={'R','B','G'};
   for (int i = 0; i < n-1; i++){
      if (s[i]==s[i+1]){
         ans++;
         char c = s[i+2];
         for(auto &x : v)if(x!=c&&x!=s[i])s[i+1]=x;
      }
   }
   cout<<ans<<"\n";
   for (int i = 0; i < n; i++)cout<<s[i];
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
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*it is just simple we are just to check if(s[i]==s[i+1]) then we
are to change s[i+1] such that it is not equal to s[i] nor equal to
s[i+2] that's all :)*/