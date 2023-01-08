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
   int n,point,maxi = 0,position = 1001;
   string name,ans;
   cin>>n;
   map<string,int>mp;
   map<string,vector<pair<int,int>>>pos;
   for (int i = 0; i < n; i++)
   {
       cin>>name; cin>>point;
       mp[name]+=point;
       pos[name].pb({point,i+1});
   }
   for(auto &x : mp)maxi = max(x.ss,maxi);
   for(auto &x : mp){ 
      if (x.ss == maxi){
         int total = 0,p=0;
         for (auto &it : pos[x.ff]){
             total+=it.ff;
             if(total>=maxi){
                 p = it.ss;
                 break;
             }
         }    
        if (p<position){
            ans = x.ff;
            position = p;
        }
      }
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
/*question is quite simple we are just to calculate the maximum
points anyone can get and then we are to check that how many players
have got the same number of points(maximum) then we are to check which 
player acheived that m point first that is we are to compare the
positions at which any particular player achieved m points -less
the position that will be the answer :)*/