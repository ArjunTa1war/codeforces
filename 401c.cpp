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
   ll n,m;
   cin>>n>>m;
   if(m>(n+1)*2)return void(cout<<"-1\n");
   if(m<(n-1))return void(cout<<"-1\n");
   if(m>=2*n){
      for (int i = 0; i < n; i++)cout<<"110";
      int d = m-2*n;
      for (int i = 0; i < d; i++)cout<<"1";
   }
   else{
      int d = m-n;
      if(d==-1){
         for (int i = 0; i < n-1; i++)cout<<"01";
         cout<<"0";
         return;
      }
      d = max(0,d);
      for (int i = 0; i < d; i++)cout<<"011";
      for (int i = 0; i < n-d; i++)cout<<"01";
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
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*this question is total based on observation and the value of m can only
range from [n-1,(n+1)*2] and if the m>2*n then it is simple to write 110
multiple times if the value of m is n-1 then we are to write like 01010 and
other than that we are to write like 01101101.. and so on :)*/