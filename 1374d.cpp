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
 ll n,k;
 cin>>n>>k;
 vector<ll>v(n);
 for(auto &x : v)cin>>x;
 ll maxi = 0;
 map<ll,ll>mp;
 for (int i = 0; i < n; i++){
     ll a =k-(v[i]%k);
     if (a==k)continue;
     mp[a]++;
     maxi = max(maxi,mp[a]);
 }
 if(maxi==0)return void(cout<<"0\n");
 ll ans = 0;
 for(auto &x : mp)if(x.ss==maxi)ans=x.ff;
 ll fa = (maxi-1)*k+ans;
 cout<<fa+1<<"\n";
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
/*we are just to find the maximum repetition of any single
number and then we are to find the largest number which is repeated for 
the maximum number of times when we find these numbers then 
we can know the answer easily (we are to make the map for required numbers)
for eg let the array for required number be 1 1 1 2 then we are to solve
this as 1 2 1 1 here first x++,1,2,then so on here k*(max-1)is added to answer
we are to add 1 in the end also because we are to first add 1 to make 0 to 1
then we can solve :)*/