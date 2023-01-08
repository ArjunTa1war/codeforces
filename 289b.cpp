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
   int n,m,d;
   cin>>n>>m>>d;
   n*=m;
   vector<ll>v(n);
   for(auto &x : v)cin>>x;
   sort(all(v));
   ll sum = 0;
   for (int i = 1; i < n; i++)if((v[i]-v[i-1])%d!=0)return void(cout<<"-1\n");
   ll middle = v[(n-1)/2];
   ll ans = 0;
   for (int i = 0; i < n; i++) ans+=abs(v[i]-middle)/d;
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
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*here we are just to keep one thing in mind if in sorted order we cannot
covert any element to the element at next index return -1 as we can not make
all the numbers equal then. 
there are two approaches to find the answer if it exists
acc to theorem :- we are just to convert everything into median number
and that will always be the optimal answer 
2nd approach is use another two vectors  one from the beginning and one
from end and check how many moves are required by left numbers and right
numbers to reach that position :)*/



// #ifdef LOCAL
// #include "arjun.hpp"
// #else
// #include <bits/stdc++.h>
// using namespace std;
// #define dbg(...)
// #endif
// #define ll long long
// #define pb push_back
// #define ff first
// #define ss second
// #define M 1000000007
// #define all(v) begin(v),end(v)
 
// void solve()
// {
//    int n,m,d;
//    cin>>n>>m>>d;
//    n*=m;
//    vector<ll>v(n),dp(n+1),dp2(n+1);
//    for(auto &x : v)cin>>x;
//    sort(all(v));
//    ll sum = 0;
//    for (int i = 1; i < n; i++){
//       if((v[i]-v[i-1])%d!=0)return void(cout<<"-1\n");
//       dp[i]+=dp[i-1]+i*(v[i]-v[i-1])/d;
//    }
//    for (int i = n-2; i >= 0; i--){
//       dp2[i]+=dp2[i+1]+(n-i-1)*(v[i+1]-v[i])/d;
//    }
//    ll ans = 1e9;
//    for (int i = 0; i < n; i++){
//       ans = min(ans,dp[i]+dp2[i]);
//    }
//    cout<<ans<<"\n";
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// #ifdef LOCAL
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     int t=1;
//     for (int i = 0; i < t; i++)
//     {
//         solve();
//     }
//     return 0;
// }