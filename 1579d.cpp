#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
  ll n;
  cin>>n;
  set<pair<int,int>>st;
  vector<pair<int,int>>ans;
  for (int i = 0; i < n; i++)
  {
      int a;cin>>a;
      if(a>0) st.insert({a,i});
  }
  while(st.size()>1)
  {  
   auto it1 = --st.end();
   auto it2 = --st.end();
   it2--;
   pair<int,int>p1 = *it1;
   pair<int,int>p2 = *it2;
   (p2.ff)--;
   (p1.ff)--;
   ans.pb({p1.ss,p2.ss});
   st.erase(it1);
   st.erase(it2);
   if(p1.ff)st.insert(p1);
   if(p2.ff)st.insert(p2);
  }
  cout<<ans.size()<<"\n";
  for(auto it : ans)cout<<it.ff+1<<" "<<it.ss+1<<"\n";
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
/*now for finding the max number of talks
a person with most sociability should talk to 2nd last one
and when that person talk gets over then the set is changed
and both of their socialbility is decreased and this thing goes
on till the socialbility of more than or equal to (n-1) people gets 
0 as alone person cannot talk :)*/