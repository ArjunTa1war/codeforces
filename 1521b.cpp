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
   for(auto &it : v)cin>>it;
   cout<<(n/2)<<"\n";
   for (int i = 1; i < n; i+=2){
    cout<<i<<" "<<i+1<<" "<<min(v[i-1],v[i])<<" "<<1999999973<<"\n";
   }
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
/*the given question is quite simple in this we are just to
add the largest prime number out there and thus we are to kep
on checking the minimum number between 0,1 and 2,3 and so on
and then we are to keep minimum number in the beginning and the
MOD value on the other side this is the solution :)*/