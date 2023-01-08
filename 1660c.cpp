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
   string s;
   cin>>s;
   map<char,int>mp;
   ll ans = 0;
   for (int i = 0; i < s.size(); i++){
      if(mp[s[i]]==1){
         ans+=2;
         mp.clear();
      }
      else mp[s[i]]=1;
   }
   cout<<s.size()-ans<<"\n";
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
/*this problem is simple we are to just store items till we find any
element already present in storage then we are to clear the storage
we are to clear the storage as
suppse aaabbcca here aa becomes pair then bb then cc then the a at 3rd
postion and a at the last position can get together but for that we need
to remove already connected elements that's why we are to empty it :)*/