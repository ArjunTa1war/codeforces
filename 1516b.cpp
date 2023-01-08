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
   vector<ll>v(n),front(n),back(n);
   for(auto &x : v)cin>>x;
   ll xo = 0;
   for (int i = 0; i < n; i++){
     xo^=v[i];
     front[i]=xo;
   }
   xo = 0;
   for (int i = n-1; i >=0; i--){
    xo^=v[i];
    back[i] = xo;
   }
   for (int i = 0; i < n-1; i++){
      if(front[i]==back[i+1])return void(cout<<"YES\n");
      if(i<n-2){
        if(front[i]==(front[i]^v[i+1])&&(v[i+1]^back[i+2])==back[i+2])return void(cout<<"YES\n");
      }
   }
   cout<<"NO\n";
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