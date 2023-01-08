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

int deg3(ll x){
  int cnt = 0;
  while(x % 3 == 0){
    cnt++;
    x /= 3;
  }
  return cnt;
}
void solve()
{
   int n;
   cin>>n;
   vector<pair<ll,ll>>v(n);
   for (int i = 0; i < n; i++){
     cin>>v[i].ss;
     v[i].ff = -deg3(v[i].ss);
   }
   sort(all(v));
   for(auto &x : v)cout<<x.ss<<" ";
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
/*now if we observe the question then we will get to know that the
if a[i] is coming before a[i+1] then degree of three of a[i]>=a[i+1]
and if the degree is same then write the numbers in increasing order
as at that time they are being multiplied by 2 :)*/

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

// bool ans(ll n,map<ll,ll>mp,vector<ll>&final,ll sz){
//      final.pb(n);
//      while (1){
//         if(n%3==0&&mp[n/3]>0){
//             n/=3;
//             mp[n]--;
//             final.pb(n);
//         }
//         else{
//             n*=2;
//             if(mp[n]>0){
//                 mp[n]--;
//                 final.pb(n);
//             }
//             else break;
//         }
//      }
//      if(final.size()==sz)return true;
//      return false;     
// }
// void solve(){
//   ll n;
//   cin>>n;
//   map<ll,ll>mp;
//   vector<ll>v(n);
//   for(auto &x : v)cin>>x,mp[x]++;
//   for (int i = 0; i <n ; i++){
//      vector<ll>final;
//      bool chk = ans(v[i],mp,final,n);
//      if(chk){
//         for(auto &x : final)cout<<x<<" ";
//         return void(cout<<"\n");
//      }
//   }
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
/*it is quite simple we are just to check the first element and that's it
if we find the correct first element then we are to keep on checking
that whether it is possible to find all other elemetns or not that is
if it is divided by 3 then check whether n/3 is present on not and else
check for n*2 and that's all :)*/