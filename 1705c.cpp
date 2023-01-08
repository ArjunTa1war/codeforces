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
   ll n,c,q;
   cin>>n>>c>>q;
   string s;
   cin>>s;
   vector<ll>v(c+1);
   vector<pair<ll,ll>>vp(c+1);
   v[0] = n;
   for (int i = 1; i <= c; i++){
        cin>>vp[i].first>>vp[i].second;
        v[i]+= v[i-1]+(vp[i].second-vp[i].first+1);
   }
   for (int i = 0; i < q; i++){
     ll num;
     cin>>num;
     while(num>n){
     ll ind = lower_bound(v.begin(),v.end(),num)-v.begin();
     num = vp[ind].ff+(num-v[ind-1]-1);
     }
     cout<<s[num-1]<<"\n";
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

/*The question is bit tricky but the best approach to solve this question is
keeping a track size incerase at every stage now we are given a value
num or we can say we are to find the value of s at index num so what we can
do is we are to reduce num to less than n now at current index we are adding
a b then it is obvious that a b array is also present in the given array 
now we are find the difference betwee a and the num and thnen we are to 
add the diff to v[ind-1].ff in order to get the index
now how can we say that index will always be reduced then 
after adding intervals then the string is always increased and initially
the index is between these intervals but when we go back to where the a is
then if we add the difference to the a then it will be same as index :)*/