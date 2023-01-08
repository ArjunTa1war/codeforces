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
   map<int,int>mp;
   for(auto &x : v)cin>>x,mp[x]++;
   int req = 0,ex = 0;
   for(auto &x : mp){
        req++;
        if(x.first!=req){
            if(ex>=2)ex-=2;
            else{
                req--;
                break;
            }
        }
        else if(x.ss>=2)ex+=(x.ss-2);
        else if(x.ss==1&&ex>=1)ex--;
        else break;
   }
   cout<<req+(ex+1)/2<<"\n";
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
