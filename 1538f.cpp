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
   ll l,r;
   cin>>l>>r;
   ll ans = 0;
   ll div = 1;
   for (int i = 1; i <= 10; i++){
        ans+=(r/div)-(l/div);
        div*=10;
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
/*it is just the sum of number of ones + number of tens + number of hundreds
and so on
as changing each one take 1 and when we are to change 10's we need one more number
so this is the main approach of this question 
number at once place is changed after every step
number at tens place is changed after every 10 steps
number at 100 place is changed after every 100 steps and so on :)*/