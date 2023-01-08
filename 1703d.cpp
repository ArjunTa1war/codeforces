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
   vector<string>v(n);
   map<string,int>mp;
   for(auto &x : v)cin>>x,mp[x]++;
   for (int i = 0; i < n; i++){
       string s1,s2;
       s1 = "";
       s2 = v[i];
       int chk = 0;
       for (int j = 0; j < v[i].size(); j++){
           string s1 = v[i].substr(0,j);
           string s2 = v[i].substr(j);
           if(mp[s1]>0&&mp[s2]>0)chk = 1;
       }
       cout<<chk;
   }
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
/*it is just to implementation that we are to search is there any string
we can break and those two broken parts are also available in the map or
not :)*/