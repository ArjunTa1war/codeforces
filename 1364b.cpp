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
   ll n;
   cin>>n;
   vector<ll>v(n);
   for(auto &it : v)cin>>it;
   vector<ll>ans;
   ans.pb(v[0]);
   for (int i = 1; i < n-1; i++){
       if(v[i]>v[i-1]&&v[i]>v[i+1])ans.pb(v[i]);
       if(v[i]<v[i-1]&&v[i]<v[i+1])ans.pb(v[i]);
   }
   ans.pb(v[n-1]);
   cout<<ans.size()<<"\n";
   for(auto &it : ans)cout<<it<<" ";
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
/*let's take an example 
1 2 3 4 here the difference between
1-2 + 2-3 + 4-3 = 3 and if we delete the middle
terms then also the sum is same but the length is minimum
so here also we only need to find the local maxima or minima
and push it into the answer :)*/