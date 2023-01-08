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
   ll n,m,num;
   cin>>n>>m;
   set<int>final;
   ll sum = 0;
   for (int i = 0; i < n; i++){
    cin>>num;
    sum+=num;
    for (int j = 0; j < num; j++){
        int lan;
        cin>>lan;
        final.insert(lan);
    }
   }
   cout<<(n*final.size())-sum<<"\n";
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