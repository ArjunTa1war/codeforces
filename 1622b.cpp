#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
  int n;
  cin>>n;
  vector<int>v(n);
  vector<pair<int,int>>dis,like;
  for(auto &x : v)cin>>x;
  string s;
  cin>>s;
  for (int i = 0; i < n; i++)
  {
      if (s[i]=='0')dis.push_back({v[i],i});
      else like.push_back({v[i],i});
  }
   sort(dis.begin(),dis.end());
   sort(like.begin(),like.end());
   int an = 1;
   vector<int>ans(n);
   for (int i = 0; i < dis.size(); i++)
   {
       ans[dis[i].second] = an;
       an++;
   }
   for (int i = 0; i < like.size(); i++)
   {
       ans[like[i].second] = an;
       an++;
   }
   for(auto &x : ans)cout<<x<<" ";
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
/*now we are to give the lowest ratings where s[i]=0 and higher ratings
where s[i]=1
now if we make two vectors one for liked songs and other for disliked
then we are to sort that vectors 
in dislikes
we are to give lowest numbers at those positions in increasing order
and then comes the turn of
liked songs here also we are to give the
number in increasing order
let the disliked songs have ratings d1,d2,d3 and their new ratings 
should be 1,2,3.. and if we sort the array then sum of (d1'-1)+(d2'-2)..
will be lowest possible which is the required solution :)*/