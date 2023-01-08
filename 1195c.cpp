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
   vector<ll>h1(n),h2(n),dp1(n,0),dp2(n,0);
   for(auto &x : h1)cin>>x;
   for(auto &x : h2)cin>>x;
   for (int i = 0; i < n; i++){
      if(i==0){
        dp1[i] = h1[i];
        dp2[i] = h2[i];
      }
       else if(i==1){
        dp1[i] = dp2[i-1]+h1[i];
        dp2[i] = dp1[i-1]+h2[i];
      }
      else
      {
        dp1[i] = max(dp2[i-2]+h1[i],dp2[i-1]+h1[i]);
        dp2[i] = max(dp1[i-2]+h2[i],dp1[i-1]+h2[i]);
      }
   }
   cout<<max(dp1[n-1],dp2[n-1])<<"\n";
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
/*this is a normal dp solution here the best option is store the count of
largest sum possible till each number now we cannot take two contnuous hieghts
so when we are consdering h1 then previous height should be h2[i-1] or h2[i-2]
and same if we are to do while considering h2 and thus we can reach the 
solution very easily :)*/ 