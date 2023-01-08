#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define ts to_string
using namespace std;

void solve()
{
  string s;
  cin>>s;
  int l = s.length();
  ll ans = l*5;
  unordered_set<string>st;
  int ix=0,iy=0,x=0,y=0;
  string str;
  for (int i = 0; i < l; i++){
     if (s[i]=='N')y++;
     else if (s[i]=='S')y--;
     else if (s[i]=='E')x++;
     else if (s[i]=='W')x--;
     str=ts(ix)+" "+ts(iy)+" "+ts(x)+" "+ts(y);
     if (st.find(str)!=st.end())ans-=4;
     st.insert(str);
     str=ts(x)+" "+ts(y)+" "+ts(ix)+" "+ts(iy);
     st.insert(str);
     ix = x;
     iy = y;
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
/*it is simple we are just to keep on storing the path and reversed path
(segment between two points)and then we are to keep on checking that
whether the path is repeated before or not if path is repeated we are
to spend 1 min only that is 4 min less than we assumed that's why we are
to subtract 4 from the answer :)*/