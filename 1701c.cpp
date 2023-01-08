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

bool isvalid(vector<ll>&v,ll time){
   ll check = 0;
   for (int i = 0; i < v.size(); i++){
      if(v[i]<=time){
        check-=(time-v[i])/2;
      }
      else check+=(v[i]-time);
   }
   if(check<=0)return true;
   return false;
}

void solve(){
   ll n,m;
   cin>>n>>m;
   map<ll,ll>mp;
   vector<ll>hash(n,0);
   for (int i = 0; i < m; i++){
     ll num;
     cin>>num;
     hash[num-1]++;
   }
   sort(all(hash));
   int lo = 0,hi = 1e9;
   while (hi-lo>1){
       int mid = (hi+lo)/2;
       if(isvalid(hash,mid))hi = mid;
       else lo = mid+1;
   }
   if(isvalid(hash,lo))return void(cout<<lo<<"\n");
   else cout<<hi<<"\n";
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
/*this question is based on the binary search in this we are to check
all the times in which the work can be completed and thus we can do this
by using simple binary search and then we are just to check it by
using a parameter called check which increase by every v[i]>time 
and decreses by time-v[i]/2 as if there are 5 extra time left then it
can only help 2 person as it is given in the question that it will take
extra hour otherwise :)*/