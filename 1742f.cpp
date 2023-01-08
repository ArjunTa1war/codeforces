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
   ll sn=0,tn=0,d,k,q;
   string s;
   cin>>q;
   bool ss=false,tt=false;
   for (int i = 0; i < q; i++){
    cin>>d>>k>>s;
    if(d==1)for(auto &x : s)(x=='a')?sn+=k:ss=true;
    else for(auto &x : s)(x=='a')?tn+=k:tt=true;
    if(tt)cout<<"YES\n";
    else{
        if(sn<tn){
           if(ss)cout<<"NO\n";
           else cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
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
/*yes i misunderstood this problem
we can change the order after any operation if we ever find any element greater
than a in t then ofcourse after that ans will be yes as s is already having a and
we can start s from a and then t from the character greater than a now we will find
suppose if tt==false then there are two options of sizes if ss>=tt ofcourse it will
be no and 2nd option we are to check whether there is any value greater than a or not
if there exists then ofcourse we cannot make s less than t in any case :)*/