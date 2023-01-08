#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
    int n;
    ll ans=0;
    cin >> n;
    vector<ll>a(n),b(n),v(n);
    for(auto &x : a)cin>>x;
    for(auto &x : b)cin>>x;
    for (int i = 0; i < n; i++)v[i] = a[i]-b[i];
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i]>0){
            ans+=(n-(i+1));
            continue;
        }
        int rq = abs(v[i])+1;
        auto it = lower_bound(v.begin()+i,v.end(),rq)-v.begin();
        ans+=(n-it);
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
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*it is quite simple we are to make a vector of differences of a[i]&b[i]
and then we are to check for v[i]<n suppose v[i]=-2 then it can make pair
witha ll v[i]>2 that is v[i]=3 let it be required so we can write
rq = abs(v[i])+1 and check the index of it and after index it it can make pair
with any number for positive numbers we don't need to check this it can make
pair with all i>(it's index)+previous indexes too which was counted
before :)*/