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
   vector<int>v(n);
   map<int,int>mp;
   int mini = *min_element(all(v));
   int maxi = *max_element(all(v));
   for(auto &x : v)cin>>x,mp[x]++;
   int ans = mp.size();
   for(auto &x : mp)if (x.ss>1)ans++;
   if (mp.size()==1) cout<<1<<"\n";
   else if (mp[mini]>1&&mp[maxi]>1)cout<<ans/2<<"\n";
   else cout<<(ans+1)/2<<"\n";

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
/*question is quite simple we are just to check the condition
question is how should we arrange the elements in order to
get the required answer
1 2 3 4 8 7 6 5 or 4 3 2 1 5 6 7 8 :)*/