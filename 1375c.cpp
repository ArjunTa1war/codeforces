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
  vector<ll>v(n);
  for(auto &x : v)cin>>x;
  if(v[0]<v[n-1])return void(cout<<"YES\n");
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
/*every question of high rating is not tough all we need to do is
make an observation that is if the last element is greater than 
the first element the  condtion can be satisfied
we are to find the first element which is greater than the first
element and we are to delete all elemenets from a+1 to ar and this
must go on and thus in the end it becomes the situation between
a[1]&a[n] :)*/