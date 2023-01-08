#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
   int n;
   cin>>n;
   vector<ll>v(n);
   int ans = 0;
   for(auto &x : v){
       cin>>x;
       ans = ans|x;
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
/*we are to make the sum of array as least as possible and we can just change
arr[i] and arr[j] to a and b such that a[i]|a[j] == a|b;
now our main approach is to start from starting and keep on changing
a[i]&a[j] to 0 & a[i]|a[j] and in this way we can make the sum least
as possible :)*/