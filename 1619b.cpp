#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
   int n;
   cin>>n;
   unordered_set<int>s;
   for (int i = 1; i*i <= n; i++)s.insert(i*i);
   for (int i = 1; i*i*i <= n; i++)s.insert(i*i*i);
   cout<<s.size()<<"\n";
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
/*we are just to print the number of 
perfect square and perfect cube we can use set here and keep on inserting
the values as set don't insert duplicates that's why
we can know the total numbers :)*/