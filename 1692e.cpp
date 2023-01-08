#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

void solve(){
   int n,r,maxi=0;
   cin>>n>>r;
   vector<ll>v(n);
   for(auto &it : v)cin>>it;
   ll sum = accumulate(all(v),0);
   if(r>sum)return void(cout<<"-1\n");
   map<int,int>mp;
   mp[0] = -1;
   sum = 0;
   for (int i = 0; i < n; i++){
         sum+=v[i];
         if(mp.count(sum-r)!=0)maxi = max(maxi,i-mp[sum-r]);
         if(mp.count(sum)==0)mp[sum] = i;             
   }
   cout<<n-maxi<<"\n";
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
/*here the best approach is to find the maximum length of the substring
whose total sum is r now for finding the maximum length of the substring
whose sum is k we can use map for it we are to keep the sum with index
in the map and check for each number :)*/