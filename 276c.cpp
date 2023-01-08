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
  ll n,q,l,r,ans=0;
  cin>>n>>q;
  vector<ll>v(n+1,0),bit(n+2,0),V(n+1,0);
  for (int i = 1; i <= n; i++)cin>>v[i];
  sort(all(v));
  for (int i = 0; i < q; i++){
    cin>>l>>r;
    bit[l]++;
    bit[r+1]--;
  }
  for (int i = 1; i <= n; i++) V[i] = bit[i]+V[i-1];
  sort(all(V));
  for (int i = 1; i <=n ; i++)ans+=(v[i]*V[i]);
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
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*the main approach of this question is to find out the
number of times an index is coming so we can do this
question perfectly by using binary indexed tree structure
solution is simple
like bit[l]++ denotes all the numbers after it it's index
will be increased by 1 and bit[r+1]-- indicates that
after it frequency of the numbers is  decreased :)*/