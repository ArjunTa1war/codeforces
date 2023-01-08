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
   int n,m;
   cin>>n>>m;
   vector<string>s;
   for (int i = 0; i < n; i++){
    string str;
    cin>>str;
    s.pb(str);
   }
   ll ans = 1;
   for (int i = 0; i < m; i++){
     set<char>st;
     for (int j = 0; j < n; j++)st.insert(s[j][i]);
     ans = (ans*st.size())%M;
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
/*we are just to find the total number of different letters at given position
in all the strings and this will be permutation now 
that is number of characters we can use in first place = st.size()
same for 2nd place and same for any other place :)*/