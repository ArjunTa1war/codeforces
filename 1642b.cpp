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
   set<ll>s;
   for (int i = 0; i < n; i++){
       int x;cin>>x;
       s.insert(x);
   }
   ll d = s.size();//distinct
   for (int i = 1; i <= d; i++) cout<<d<<" ";
   for (int i = d+1; i <= n; i++)cout<<i<<" ";
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
/* now we have n children and n powerups
 now strength is number of different kind of powerups a child has
 suppose k = 1 that is we are to make a team of 1 child so sam will give
 all his power up to this child and thus strength of child becomes no.
 of distinct powerups
 then for k = 2 there are two childs in order have have least strength we are
 to give same numbers to one child and distinct to other.
 main approach is
 keep the same elements in same subset and then using it as one number now if
 the k>distinct elements then it is obvoius that we are to break that subset one
 by one and thus adding one to the strength each time :)*/