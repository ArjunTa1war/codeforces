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
   ll ans = 1;
   for (int i = 1; i <=n; i++)ans*=i;
   ans/=2;
   ans/=(n/2)*(n/2);
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
/*this question is quite simple we are just to find the formula for
it first of all we are given n people and we are to choose n/2 so
the formula becomes ncn/2 and then we are to find the inner permutatoins of
n/2 elements but we are to avoid the cyclic one thus the formula for
such kinda permutaion is (n-1)! and the answer becomes
ncn/2*(n-1)!*(n-1)!/2 and then we are to divide it by two because
it can also happen that
suppose first we choose
1 2 out of 1 23 4 then the other is 3 4
but if we choose 3 4 then the other will be 1 2 so in order to avoid
the repetition we are to divide it by two :)*/