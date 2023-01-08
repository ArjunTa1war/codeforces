#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

void solve()
{
 ll n,ans=1e18;
 cin>>n;
 vector<ll>v(n);
 for(auto &it : v)cin>>it;
 for (int i = 0; i < n; i++){
    ll temp = 0;
    ll prev = 0;
    for (int j = i-1; j >=0; j--){
        ll curr = (prev/v[j])+1;
        temp+=curr;
        prev = v[j]*curr;
    }
    prev = 0;
    for (int j = i+1; j < n; j++){
        ll curr = (prev/v[j])+1;
        temp+=curr;
        prev = v[j]*curr;
    }
    ans = min(ans,temp);
 }
 cout<<ans<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*this question is simple we are just to make it in the form of
negative 0 positive and if we only consider the absolute numbers then
we can notice that before 0 each element should be greater than previous
number and same for every element after 0 and thus we are to do this only
(prev/v[j])+1 gives out the totl number of v[j]required for making it
greater than the previous number :)*/