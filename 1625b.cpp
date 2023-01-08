#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
  int n;
  cin>>n;
  int ans = -1;
  int maxi = 0;
  unordered_map<int,vector<int>>mp;
  for (int i = 0; i < n; i++)
  {
      int x;cin>>x;
      mp[x].push_back(i);
      maxi = max(maxi,x);
  }
  for(auto z : mp)
  {   int i = z.first;
      int sz = mp[i].size(); 
      if (sz==0||sz==1)continue;
      for (int j = 0; j < sz-1; j++)
      {
         int d = mp[i][j+1]-mp[i][j];
         ans = max(ans,(n-d));
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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*find the least distance between two same elements
  now for the same purppse we have many options 
  making a vector,map,unordered map but unordered maps seems
  to be fastest so make map give the value in array first key
  and write the index of it's occurences in a vector and in the
  end we are just to check the least difference between the given
  elements in the vector :)*/