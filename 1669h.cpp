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
   vector<ll>v(n),cnt(31);
   for(auto &it : v)cin>>it;
   for (int i = 0; i < n; i++){
      int j = 0;
      int num = v[i];
      while (num){
        if(num%2==1)cnt[j]++;
        num/=2;
        j++;
      }
   }
   ll ans = 0;
   for (int i = 30; i >=0; i--){
       if(cnt[i]+k>=n){
        k-=(n-cnt[i]);
        int num = pow(2,i);
        ans+=num;
       }
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
/*this question is quite simple first we are to store
the bits let the bits from 0 to 30 for 3 numbers be
0010000000
0100000000
0110000000.. and so on
we are to start increasing the bits from the 30th bit
as it will make the maximum ans and we are to go till 0
and thus we will get our answer :)*/