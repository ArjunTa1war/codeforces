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
   ll n;
   cin>>n;
   vector<ll>v(n),chk;
   for(auto &x : v)cin>>x;
   int dif = 0;
   for (int i = 0; i < n; i++){
        if(v[i]!=i+1)dif++,chk.pb(i);
   }
   if(dif==0)return void(cout<<"0\n");
   for (int i = 0; i+1 < chk.size(); i++){
         if(chk[i+1]-chk[i]!=1)return void(cout<<"2\n");
   }
   cout<<"1\n";
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
/*this question is quite simple the answer can be either 0,1,2
suppose the numbers are already sorted we dont need to change it
now if all the wrong placed elements are in continuity then we can
selct that array and correct it then all the array will be sorted now
if any element there is at correct position we can do one more thing
that is select the all elements and reshuffle it twice then we can get
our answer :)*/