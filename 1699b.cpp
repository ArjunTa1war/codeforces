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
    ll n, m;
    cin >> n >> m;
    string s1, s2;
    for (int i = 0; i < m / 2; i++)
    {
        string a = "1 0 ";
        string b = "0 1 ";
        if (i % 2 == 0){
            s1.insert(s1.end(),all(a));
            s2.insert(s2.end(),all(b));
        }
        else{
            s1.insert(s1.end(),all(b));
            s2.insert(s2.end(),all(a));
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (i % 2 == 0)cout << s1 << "\n"<< s2 << "\n";
        else cout << s2 << "\n"<< s1 << "\n";
    }
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
/*we are just to make the pattern 
1 0 0 1 1 0 0 1 = s1
0 1 1 0 0 1 1 0 = s2
and thus we are to repeat this pattern like s1 s2 then s2 s1 and so on :)*/