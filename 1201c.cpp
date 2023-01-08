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
 sort(all(v));
 ll ans = v[n/2];
 ll cnt = 1;
 for (int i = n/2; i < n-1; i++){
    ll d = (v[i+1]-v[i]);
    ll req = d*cnt;
    if(k>=req)k-=req,ans+=d;
    else break;
    cnt++;
 }
 ll more = k/cnt;
 ans+=more;
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
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*the question is quite simple we are nothing to do with numbers less than
median first we will have to make median equal to the next element by increasing
1 that is median to  next element now we are to increse two elements in order to
reach the third element in order then we are to increase the 3 elements together
in order to reach the fourth element and so on if the k is not great enough to
reach to next element then count the max increase by using the formula k/cnt
we can get our answer :)*/