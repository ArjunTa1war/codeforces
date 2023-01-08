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
   ll ans = 0;
   for (int i = 0; i <=60; i++){
    ll num = pow(2,i);
    if(num&n)ans+=((long long)pow(2,i+1)-1);
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
/*this question is totally logic based and observation based now if we
take the example till 8, 15 times the bit was changed 
till 16 ,31 times bit was changed and so on 
that is 2^i+1-1 the bit was changed
every number can be expressed in the terms of 2^a+2^b and so on and
we are to deal with all these numbers seperately :)*/