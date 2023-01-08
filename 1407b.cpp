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
   vector<int>v(n),ans;
   for(auto &x : v)cin>>x;
   sort(all(v),greater<int>());
   ans.pb(v[0]);
   int in = 0,g_c = v[0];
   v[0] = -1;
   for (int i = 0; i < n-1; i++){
     int maxi = 1;
     for (int j = 0; j < n; j++)
     {
         if(v[j]!=-1){
            if(gcd(g_c,v[j])>=maxi){
                  maxi = gcd(g_c,v[j]);
                  in = j;
            }
         }
     }
     g_c = gcd(g_c,v[in]);
     ans.pb(v[in]);
     v[in] = -1;
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
/*we are to maximize the sequence c1,c2,c3.... in order to do that we are
first to write the maximum number of sequence a1,a2,a2
as gcd(a) single number is a and then we are to check the number such
that gcd(a,b) is max then we are to update the gcd and then check it again
we are to do this for the n-1 times for finding the n-1 numbers as one 
number is the maximum number itself :)*/