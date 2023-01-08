#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
    int n, d;
    cin >> n >> d;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        int m, s;
        cin >> m >> s;
        v[i] = {m, s};
    }
    ll ans = 0, sum = 0;
    sort(begin(v), end(v));
    int j = 0;
    for (int i = 0; i < n;)
    {
        ll num = v[j].first;
        while (num + d > v[i].first && i < n)
        {
            sum += v[i].second;
            i++;
        }
        ans = max(sum, ans);
        sum = sum - v[j].second;
        j++;
        if (j == n)break; 
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
/*this question is based on approach
we will sort the money and keep on adding the friendship factor
and in the end we are to find the maximum friendship factor kefa
can have :) */