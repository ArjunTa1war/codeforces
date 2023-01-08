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
   vector<ll>v(n);
   for(auto &x : v)cin>>x;
   ll ans = 0;
   for (int i = 1; i < n-1; i++)
   {
       if (v[i]>v[i+1]&&v[i]>v[i-1])
       {
          v[i+1] = v[i];
          if(i<n-2)v[i+1] = max(v[i+1],v[i+2]);
          ans++;
       }
   }
   cout<<ans<<"\n";
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
/*if we find any local maxima then there are many options but the best way is
to kill two targets with a single arrow that is
suppose a2 is local maxima and a4 is also local maxima then we can
make a3 such that both the maxima are cancelled by keeping a3 = max(a2,a4)
in this way we can avoid all local maxima's in least steps.
for eg let the array be 1 2 1 3 1  then there are many option let do this acc
to approach we wil find one maxima tht is 2 then we are to check max(arr[i],arr[i+2])
then we are to keep maxima in place of a[i+1] and make array like
1 2 3 3 1 here it is done in a single step :)*/