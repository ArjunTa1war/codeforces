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
   ll n,ans=1;
   cin>>n;
   if(n==1)return void(cout<<"0\n");
   if(n==2)return void(cout<<"3\n");
   if(n==3)return void(cout<<"6\n");
   for (int i = 0; i < n-3; i++)ans=(ans*3)%M;
   ll num1 = ((ans/3)*2)%M;
   ll num2 = (ans*2)%M;
   ans = ((num1+num2)*3)%M;
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
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}