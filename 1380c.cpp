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
  ll n,x;
  cin>>n>>x;
  int nc = n;
  vector<ll>v(n);
  for(auto &x : v)cin>>x;
  sort(all(v),greater<int>());
  int prev = -1,ans=0;
  for (int i = 0; i < n; i++){
      if(v[i]*(i-prev)>=x)ans++,prev=i; 
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
/*we are to count the total number of teams and in this case
we can leave few members also so think if we start from the beginning
that is in increasing order it can take all the members also but this
can never give the right answer that's why we are to start from the 
largest number and count the total number of teams we can form :)*/