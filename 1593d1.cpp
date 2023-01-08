#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

void solve()
{
   int n;
   cin>>n;
   vector<ll>v(n);
   for(auto &x : v)cin>>x;
   sort(v.begin(),v.end());
   ll ans = 0;
   for (int i = 1; i < n; i++)
   {
       ans = gcd(ans,v[i]-v[0]);
   }
   if(ans==0){
       cout<<"-1\n";
       return;
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
/*we are just to find the gcd of all (v[i]-v[0]) and that will be
the answer if ans = 0 value of k can be anything so ans  will be -1 :)*/