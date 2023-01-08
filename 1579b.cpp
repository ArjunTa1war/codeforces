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
   vector<int>v(n);
   for(auto &x : v)cin>>x;
   if (is_sorted(v.begin(),v.end())){
       cout<<"0\n";
       return;
   }
   vector<int>l,r,d;
   for (int i = 0; i < n; i++)
   {
       int a = *min_element(v.begin()+i,v.end());
       int itr = find(v.begin()+i,v.end(),a)-v.begin();
       if(itr==i)continue;
       rotate(v.begin()+i,v.begin()+itr,v.end());
       d.pb(itr-i);
       l.pb(i+1);
       r.pb(n);
   }
   cout<<l.size()<<"\n";
   for (int i = 0; i < l.size(); i++)
   {
       cout<<l[i]<<" "<<r[i]<<" "<<d[i]<<"\n";
   }
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
/*we are just to keep on finding the minimum element and rotate the array
by (itr-i)units from i to n
and then and after n rotation we are to print all the values of
l,d,r :)*/