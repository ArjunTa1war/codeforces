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
   ll n,k;
   cin>>n>>k;
   vector<ll>front,back;
   for (ll i = 1; i < sqrt(n); i++){
      if(n%i==0){
        front.pb(i);
        back.pb(n/i);
      }
   }
   ll a = sqrt(n);
   if(a*a==n)front.pb(a);
   reverse(all(back));
   front.insert(front.end(),all(back));
   if(k>front.size())return void(cout<<"-1\n");
   else cout<<front[k-1]<<"\n";
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
/*we are just to find all the divisors of the given number and print
the kth divisor if available :)*/