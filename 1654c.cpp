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
   ll n,sum=0;
   cin>>n;
   vector<ll>v(n);
   map<ll,ll>mp;
   queue<ll>q;
   for(auto &x : v)cin>>x,sum+=x,mp[x]++;
   q.push(sum);
   while (!q.empty()){
        ll num = q.front();
        q.pop();
        if(mp[num]>0)mp[num]--;
        else{
            q.push((num+1)/2);
            q.push(num/2);
        }
        if(q.size()>n)return void(cout<<"NO\n"); 
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
/*it is quite simple we just need to have good observation skills and
that's it we are to start from the sum of the numbers and keep on dividing
it into two numbers we can do this by stack or queue it is quite obvious
if stack size gets greater than n then we need to return no and if
stack or queue gets empty we need to return yes :)*/

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
//    ll n,sum=0;
//    cin>>n;
//    vector<ll>v(n);
//    map<ll,ll>mp;
//    stack<ll>st;
//    for(auto &x : v)cin>>x,sum+=x,mp[x]++;
//    st.push(sum);
//    while (!st.empty()){
//         ll num = st.top();
//         st.pop();
//         if(mp[num]>0)mp[num]--;
//         else{
//             st.push((num+1)/2);
//             st.push(num/2);
//         }
//         if(st.size()>n)return void(cout<<"NO\n"); 
//    }
//    cout<<"YES\n";
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