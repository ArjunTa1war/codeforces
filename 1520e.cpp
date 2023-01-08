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
   string s;
   cin>>s;
   ll total = count(all(s),'*');
   ll stars = 0,ans=0;
   for (int i = 0; i < n; i++){
      if(s[i]=='*')stars++;
      else ans+=min(stars,total-stars);
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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*question is quite simple here we are just to keep on checking the
numbers of sheeps after it and number of sheeps before it
it means when even we encounter any "." then we are moving all 
sheeps of either left or right to it and this is the main approach
you can even think in this question that whenever we reach "." then
it gets filled and then we move on :)*/