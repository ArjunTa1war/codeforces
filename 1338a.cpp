#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)cin >> x;  
    ll maxi = 0, ans = 0;
    for (ll i = 0; i < n - 1; i++){
        if (v[i] > v[i + 1]){
            maxi = max(maxi, v[i] - v[i + 1]);
            v[i + 1] = v[i];
        }
    }
    if (maxi == 0){
        cout << "0\n";
        return;
    }
    for (int i = 0; i <= 32; i++){
        ans++;
        if ((1 << i) >= maxi)break;
        maxi -= (1 << i);
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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*our approach is to  find the minimum number such that we
can make any array sorted by adding any number less than that number
for eg
5 4 3 2 1 now if we want to find the minimum such that it becomes
sorted is
now 2nd number is 4 we are to make it equal to or greater than 5
so we add 1 it becomes  5 5 3 2 1 now again
this will go on till ned now the max difference will be 4 in this case
now 2^0+2^1+2^2>4 so the answer will be 3 :)*/