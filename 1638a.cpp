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
   for (int i = 0; i < n; i++){
       if (v[i]!=i+1){
         auto it = find(v.begin()+i,v.end(),i+1);
         it++;
         reverse(v.begin()+i,it);
         break;
       }
   }
   for(auto &x : v)cout<<x<<" ";
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
/*for any permutation to be lexicographically minimum it should be in order
that is 1,2,3,4,..... so we are to start from beginning and check for
v[i]!=i and we are to find the place where i is located 
and we are to use to rotate function from v[i] to the position of i :)*/