#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
   int n;
   cin>>n;
   vector<int>v(n),ans;
   for(auto &x : v)cin>>x;
   for (int i = n-1; i >=0 ; i--)
   {
      if(v[i]==i+1)ans.pb(0);
      else
      {
          auto it = find(v.begin(),v.end(),i+1)-v.begin();
          int it1 = v.size()-i;
          rotate(v.begin(),v.begin()+it+1,v.end());
          ans.pb(it1+it);
      }
      v.pop_back();
   }
   reverse(ans.begin(),ans.end());
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
/*this question is simple we are given a array and we are to check the steps
we need to convert 1,2,3,4..n (serial wise) to this array 
now as given first we can rotate 1-1 array then 1-2 then 1-3 and so on
so we are to start the given array from the end and thus keep on finding
the required number and rotate the vector 
and how much we are rotating (array of it)is the ans :)*/