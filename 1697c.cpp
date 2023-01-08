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
   string s,t;
   cin>>s>>t;
   if(s==t)return void(cout<<"YES\n");
   vector<ll>cnta,cntc,cnt2a,cnt2c;
   string sc,st;
   for (int i = 0; i < n; i++){
       if(s[i]=='a')cnta.pb(i),sc.pb('a');
       else if(s[i]=='c')cntc.pb(i),sc.pb('c');
       if(t[i]=='a')cnt2a.pb(i),st.pb('a');
       else if(t[i]=='c')cnt2c.pb(i),st.pb('c');
   }
   if(sc!=st)return void(cout<<"NO\n");
   if(cnta.size()!=cnt2a.size()||cntc.size()!=cnt2c.size())return void(cout<<"NO\n");
   for (int i = 0; i < cnta.size(); i++){
       if(cnta[i]>cnt2a[i])return void(cout<<"NO\n");
   }
   for (int i = 0; i < cntc.size(); i++){
       if(cntc[i]<cnt2c[i])return void(cout<<"NO\n");
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
/*question is a bit tricky but we are just to keep three things in mind
1. count of each character should be same
2. it is observed that a can only move to right and c only to left
so if there is any t's a occuring before the s's a then return false
same for c
3.a and c cannever be swapped that's why after removing b s should be
equal to t :)*/
