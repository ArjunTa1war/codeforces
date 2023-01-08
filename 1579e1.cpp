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
   deque<int>q={};
   for(auto &x : v)cin>>x;
   q.push_back(v[0]);
   for (int i = 1; i < n; i++)
   {
    if (v[i]<=q.front())q.push_front(v[i]);
    else q.push_back(v[i]);
   }
   for(auto it : q)cout<<it<<" ";
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
/*this question is quite simple we have to take digits in order that's why
if we find any number less then the front number then only we will add that
number to front otherwise we will add that number to end :)*/