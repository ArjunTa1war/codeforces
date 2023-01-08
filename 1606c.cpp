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
   ll n,k,ans=0;
   cin>>n>>k;
   vector<ll>v(n);
   for (int i = 0; i < n; i++){
     int x;
     cin>>x;
     v[i] = (int)pow(10,x);
   }
   k++;
   for (int i = 0; i <(int)v.size()-1; i++){
       ll dif = (v[i+1]-v[i])/v[i];
       if(k<=dif){
        ans+=(k*v[i]);
        k = 0;
        break;
       }
       ans+=(dif)*v[i];
       k-=dif;
   }
   ans+=k*(v.back());
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
/*it is quite simple we are just to think one thing in this that 
we are to find the minimum number which can be made by using the
k+1 digits now there is also one more thing 
for eg the array is 10 100 10000 now here comes out that
we cannot use 10 more than (100-10)/10 that is 9 times other wise we
can write it in the form of 100's which will reduce k thus we are to 
keep this in our mind and along with this we are to upgrade the answer
and reduce the value of k :)*/