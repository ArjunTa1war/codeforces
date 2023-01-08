#include <iostream>
#include <math.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= cbrt(n); i++)
    {
        ll a = n - (i*i*i);
        if (a<=0)break;
        ll b = cbrt(a);
        if (b*b*b==a)
        {
            cout<<"YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*the question is simple we need to find whether number can be represented with n = a^3+b^3
so by this we can conclude that b^3 = n-a^3 and b = cuberoot(n-a^3)
if b is an integer than cout yes otherwise no :)*/