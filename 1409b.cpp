#include <iostream>
#define ll long long
using namespace std;
ll mult1(ll a, ll b, ll x, ll y, ll n)
{
    a = a - n;
    if (a < x)
    {
        int rest = x - a;
        a = x;
        b = b - rest;
        if (b < y)
            b = y;
    }
    return a * b;
}
ll mult2(ll a, ll b, ll x, ll y, ll n)
{
    b = b - n;
    if (b < y)
    {
        int rest = y - b;
        b = y;
        a = a - rest;
        if (a < x)
            a = x;
    }
    return a*b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll a, b, x, y, n, a1, a2;
        cin >> a >> b >> x >> y >> n;
        cout<<min(mult1(a,b,x,y,n),mult2(a,b,x,y,n))<<"\n";
    }
    return 0;
}
/*there are only two cases first decrease a till x and then decrease b if a becomes
less then x and other option is decreasing b first and then a with restrictions
and after finding these we are just to find the minimum value of a*b :)*/