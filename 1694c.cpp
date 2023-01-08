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
   ll n,cnt=0,sum=0;
   cin>>n;
   vector<ll>v(n);
   for(auto &it : v)cin>>it;
   if(accumulate(all(v),0)!=0)return void(cout<<"NO\n");
   for (int i = n-1; i >=0; i--){
     if(v[i]!=0)cnt=1;
     sum+=v[i];
     if(i!=0&&sum>=0&&cnt)return void(cout<<"NO\n");
   }
   cout<<"YES\n";
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
/*the question is based on observations first off all
the sum of the array must be 0 then we are to start from the end
and make sure that from 1 to the last non zero element sum 
should be strictly less than the 0 if we start counting sum
from the last :) */