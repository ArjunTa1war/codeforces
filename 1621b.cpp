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
   long n;
   cin>>n;
   vector<vector<long>>v(n,vector<long>(3));
   pair<long,long>maxi = {-1e9,1e9};
   pair<long,long>mini = {1e9,1e9};
   long whole = 1e9;
   for (int i = 0; i < n; i++){
      cin>>v[i][0]>>v[i][1]>>v[i][2];
      long t1 = mini.first;
      long t2 = maxi.first;
         if(v[i][0]<=mini.first){
            mini.second = min(mini.second,v[i][2]); 
            if(v[i][0]<mini.first)mini.second = v[i][2];
            mini.first = v[i][0];
       }
          if(v[i][1]>=maxi.first){
            maxi.second = min(maxi.second,v[i][2]);
            if(v[i][1]>maxi.first)maxi.second = v[i][2];
            maxi.first = v[i][1];
       }
       long ans = mini.second+maxi.second;
       if(t1!=mini.first||t2!=maxi.first)whole = ans;
       if(v[i][0]==mini.first&&v[i][1]==maxi.first)whole = min(whole,v[i][2]);
       cout<<min(whole,ans)<<"\n";
   }
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
/*if we want to take all the values from min to max we just need to do one
thing that is check for just min value and maximum value and we are just to
minimize the cost of it and there is one more conditon where the number itself
is the maximum and minimum then we are to store the minimum number 
among them :)*/