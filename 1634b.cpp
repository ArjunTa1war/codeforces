#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
   ll n,x,y;
   cin>>n>>x>>y;
   vector<ll>v(n);
   for(auto &x : v) cin>>x;
   ll total = accumulate(v.begin(),v.end(),0)+x;
   if((y&1)==(total&1))cout<<"Alice\n";
   else cout<<"Bob\n";
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
/*here we are to do
x(+/^)a1(+/^)a2..........and so on
we are to keep in mind that
even + even = even
even + odd = odd
odd + odd = even
odd + even = odd
and same for xor-------->
even^even = even
even^odd = odd
odd^odd = even
odd^even = odd
now we can have a clearity that we are to check for parity only
that is whehter x+/^ai+/^a2 is even or odd
then we are to check the parity of y
if the parity is same then alice(given x)is the answer
and if not then ofcourse bob(given x+3)is the answer :)*/
