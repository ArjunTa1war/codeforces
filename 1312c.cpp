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
  int n,k;
  cin>>n>>k;
  vector<ll>v(n);
  for(auto &x : v)cin>>x;
  vector<ll>chk(65,0);
  for (int i = 0; i < n; i++){
     int p = 0;
     while (v[i]>0){
        chk[p]+=v[i]%k;
        v[i]/=k;
        p++;
     }
  }
  for(auto &x : chk){
    if(x>1)return void(cout<<"No\n");
  }
  cout<<"YES\n";
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
/*question is quite simple but just require some attention 
we are just to check whethere a number can be reduced to zero or not
now we are to start from the pow(k,n)such that the difference pow(k,n)
-num is minimum we are to keep on reducing the number and we are also
to take care that no two values are using same pow(k,n) :)*/


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
//    ll n,k;
//    cin>>n>>k;
//    ll k_c = k;
//    vector<ll>mul;
//    mul.pb(1);
//    while (k<=1e16){
//     mul.pb(k);
//     k*=k_c;
//    }
//    int sz = mul.size();
//    map<ll,ll>mp;
//    int ans = 0;
//    for (int i = 0; i < n; i++){
//        ll num;
//        cin>>num;
//        if(ans==1)continue;
//        if(num==0)continue;
//        else{
//          for (int j = sz-1; j >=0; j--){
//             if(mul[j]<=num&&mp[j]==0){
//                 num-=mul[j];
//                 mp[j]++;
//             }
//          }
//          if(num!=0)ans=1;
//        }
//   }
//     if(ans==1)cout<<"NO\n";
//     else cout<<"YES\n";
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// #ifdef LOCAL
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         solve();
//     }
//     return 0;
// }








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
//    ll n,k;
//    cin>>n>>k;
//    map<ll,ll>mp;
//    ll ans = 0;
//    for (int i = 0; i < n; i++){
//        ll num;
//        cin>>num;
//        if(ans==1)continue;
//        if(num==0)continue;
//        else{
//             ll maxi = log(num)/log(k);
//             for (int j = maxi+1; j >=0; j--){
//                 ll kc = pow(k,j);
//                 if(mp[j]==0&&num>=kc){
//                     mp[j]++;
//                     num-=kc;
//                 }
//             }
//          }
//          if(num!=0)ans = 1;
//        }
//     if(ans==1)cout<<"NO\n";
//     else cout<<"YES\n";
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// #ifdef LOCAL
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         solve();
//     }
//     return 0;
// }