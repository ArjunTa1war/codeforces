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
  vector<int>v(n);
  for(auto& x : v)cin>>x;
  int ans = 0;
  for (int i = 0; i < n-1; i++)
  {
      if(v[i]>v[i+1]){
          ans++;
          i++;
      }
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
/*we are just to calculate the number of v[i] greater than v[i+1]
and that will be the answer :)*/