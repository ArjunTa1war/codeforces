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
  ll n,m,k;
  cin>>n>>m>>k;
  vector<ll>v(n+1,0),V(n+2,0),U(m+2,0);
  vector<array<ll,3>>m1(m+1);
  for (int i = 1; i <= n; i++)cin>>v[i];
  for (int i = 1; i <= m; i++){
    cin>>m1[i][0]>>m1[i][1]>>m1[i][2];
  }
  for (int i = 1; i <= k; i++){
    int a,b;
    cin>>a>>b;
    U[a]++;
    U[b+1]--;
  }
  ll sum = 0;
  for (int i = 1; i <= m; i++){
      sum+=U[i];
      m1[i][2]*=sum;
      V[m1[i][0]]+=m1[i][2];
      V[m1[i][1]+1]-=m1[i][2];
  }
  sum = 0;
  for (int i = 1; i <=n; i++){
     sum+=V[i];
     v[i]+=sum;
  }
  for (int i = 1; i <=n; i++)cout<<v[i]<<" ";
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
/*this question is done by fenwick tree the basic approach is
use the fenwick tree for finding the number of times a paricular m 
has occured then change their d to d*(occurence)
after that we are to do the basic calculation that is keep on adding
the number to original array :)*/