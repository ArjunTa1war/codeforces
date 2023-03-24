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
   sort(all(v));
   int ans = 0;
   for(int i = 1;i<=(n/2)+1;i++){
       vector<int>vc(v);
       int k = i;
       while(k>0){
          auto ind = upper_bound(all(vc),k)-vc.begin();
          if(ind==0)break;
          else vc[ind-1] = 1e9;
          vc[0] = 1e9;
          sort(all(vc));
          k--;
       }
       if(k!=0)break;
       ans = i;
   }
   cout<<ans<<"\n";
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

/*we don't need to use our brain for it it is just a brute
forces just check for all cases your question will be done :)*/