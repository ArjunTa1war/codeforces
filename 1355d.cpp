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
   int n,s;
   cin>>n>>s;
   if(2*n>s)return void(cout<<"NO\n");
   cout<<"YES\n";
   for (int i = 0; i < n-1; i++)cout<<2<<" ";
   cout<<s-2*(n-1)<<"\n1\n";
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
/*the question is just based on observation that
if there are all the numbers greater than the 1 then there
will not be any condition when sum of subarray will be equal
to 1 and there will never be condition when s-k is also present :)*/