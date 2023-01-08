#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
 ll n,m;
 cin>>n>>m;
 ll total = n*m;
vector<ll>v;
 for (int i = 1; i <= n; i++){
     for (int j = 1; j <= m; j++){
        ll check = (i-1)+(j-1);
        check = max((i-1)+(m-j),check);
        check = max((n-i)+(m-j),check);
        check = max((n-i)+(j-1),check);
        v.pb(check);
     }
 }
 sort(v.begin(),v.end());
 for(auto &x : v)cout<<x<<" ";
 cout<<"\n";
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
/*it is quite obvious that rahul can sit on m*n seats
when k = 0,1,2,,,,m*n-1 and from question it is quite clear that
tina will sit at the corner positions only now we are to find the max distance
between i,j and the position of tina that is (corner positions)
and then when we will sort the array it will give the required solution to
the question :)*/