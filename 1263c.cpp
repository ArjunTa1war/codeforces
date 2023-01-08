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

void solve(){
   int n;
   cin>>n;
   vector<int>ans;
   ans.pb(0);
   for (int i = 1; i <= sqrt(n); i++){
          ans.push_back(i);
          if(i==n/i)break;
          ans.push_back(n/i);
   }
   sort(all(ans));
   cout<<ans.size()<<"\n";
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
/*if after sqare root we divide the number n then it will be among the numbers from
1-sqrt(n) that's why we just need to checkout the numbers till sqrt(n) and every 
number from 1 to sqrt(n) divides n then it gives out the different number each time
otherwise break the loop :)*/