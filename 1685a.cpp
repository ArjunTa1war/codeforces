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
 int n;
 cin>>n;
 vector<int>v(n),ans;
 for(auto &x : v)cin>>x;
 if(n%2==1){
     cout<<"NO\n";
     return;
 }
 sort(all(v));
 for (int i = 0; i < n/2; i++){
     ans.pb(v[i]);
     ans.pb(v[(n/2) + i]);
 }
 for (int i = 0; i < n-1; i++){
     if(ans[i]==ans[i+1]){
         cout<<"NO\n";
         return;
     }
 }
 cout<<"YES\n";
 for(auto x : ans)cout<<x<<" ";
 cout<<"\n";
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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*we are just to check whether we can write this
in the form of min max min max etc or not and this
should be even :)*/