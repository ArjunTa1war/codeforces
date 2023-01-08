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
   ll n,k;
   cin>>n>>k;
   vector<array<ll,2001>>dp(2001);
   for (int i = 1; i <= n; i++)dp[1][i]=1;
   for (int i = 2; i <=k; i++){
     for (int j = 1; j <=n ; j++){
         for (int k = 1; k*k<j; k++){
            if(j%k==0){
            dp[i][j]=(dp[i][j]+dp[i-1][k]+M)%M;
            dp[i][j]=(dp[i][j]+dp[i-1][j/k]+M)%M;
            }
         }
         ll a = sqrt(j);
         if(a*a==j)dp[i][j]=(dp[i][j]+dp[i-1][a]+M)%M;
     }
   }
   ll ans = 0;
   for (int i = 1; i <=n ; i++) ans=(ans+dp[k][i]+M)%M;
   cout<<(ans+M)%M<<"\n";
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
    int t =1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*here we are to start from the beginning and then calculate the number
of ways of length i ending with digit j and this is obvious that
if we want to find a 6 length long array which end with digit 4 then of
course we will need 5 length array before it now we all need all the array
ending with digit which is divides the 4 and of lenghth 5 so the code
will work in this way :)*/