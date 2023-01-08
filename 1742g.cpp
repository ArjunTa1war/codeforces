#ifdef LOCAL
#include "arjun.hpp"
#else
#include <bits/stdc++.h>
using namespace std;
#define dbg(...)
#endif
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)

void solve()
{
   int n;
   cin>>n;
   vector<int>v(n);
   for(auto &x : v)cin>>x;
   vector<int>ans;
   int maxi = *max_element(all(v));
   int org = maxi;
   int ind = max_element(all(v))-v.begin();
   v[ind] = -1;
   ans.push_back(org);
   for (int i = 0; i < min(31,n); i++){
      int el = -1;
      int maxi = org;
      for (int i = 0; i < n; i++){
         if((org|v[i])>maxi)maxi = (org|v[i]),el = i;
      }
      if(el==-1)break;
      ans.push_back(v[el]);
      v[el]=-1;
      org = maxi;
   }
   for (int i = 0; i < n; i++){
     if(v[i]>0)ans.push_back(v[i]);;
   }
   for(auto &x : ans)cout<<x<<" ";
   cout<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*as there are total of 30 bits we are to take care that first 30 numbers should
have different bits and in short we are just to calculate the max prefix or for
first 30 elements and after that we can add anything now first element will always
be the first one and then after that we are to check for the max or 30 times
and then we can get the answer :)*/