#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v), end(v)
using namespace std;
 
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.pb({a, b});
    }
    int ans = n;
    long double slope, sl;
    for (int i = 0; i < n; i++){
        if (v[i].ff == 100000)continue;  
        if (v[i].ff - x == 0) slope = 123456;
        else slope = (long double)(v[i].ss - y) / (v[i].ff - x);
           
        for (int j = i + 1; j < n; j++){
            if (v[j].ff == 100000)continue;    
            if (v[j].ff - x == 0) sl = 123456;    
            else sl = (long double)(v[j].ss - y) / (v[j].ff - x);         
            if (sl == slope) v[j].ff = 100000, ans--;               
        }
    }
    cout << ans << "\n";
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
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*we are just to compare the slopes of the point wrt the coordinates of
the gun those whose slope is same we are to consider them as one and
thus this is the approach :)*/