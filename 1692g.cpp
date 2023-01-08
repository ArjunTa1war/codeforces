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
   int n,k,cnt=1;
   cin>>n>>k;
   vector<ll>v(n),ans;
   for(auto &it : v)cin>>it;
   for (int i = 0; i < n-1; i++){
      while (v[i]<2*v[i+1]&&i<n-1)cnt++,i++;
      if(cnt>1)ans.pb(cnt),i--;
      cnt = 1;
   }
   ll fa = 0;
   for(auto &x : ans){
      if(x<k+1)continue;
      fa+=(x-k);
   }
   cout<<fa<<"\n";
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
/*now it is quite obvious that in the required subarray the condition
1*a[i]<2*a[i]<4*a[i]<8*a[i]... that is strictly increasing now if
we notice then we can come to conclusion that twice of number should
be greater than the previous number and here we are to count the length
of all such strings now if the length of the string is less than k+1 then
it is of no use but if it is greater or equal to the k+1 then add
length-(k+1)+1 as it is the total possible number of substrings of lengh k
so that is the answer :)*/