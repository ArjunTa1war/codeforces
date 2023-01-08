#include <iostream>
#define ll long long
using namespace std;
int Digits(ll n)
{
    ll largest = 0;
    ll smallest = 9;
    while (n)
    {
        ll r = n % 10;
        largest = max(r, largest);
        smallest = min(r, smallest);
        n = n / 10;
    }
    return largest * smallest;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll a, k;
        cin >> a >> k;
        for (ll i = 0; i < k - 1; i++)
        {
            if (Digits(a) == 0)
            {
                break;
            }
            a = a + Digits(a);
        }
        cout << a << "\n";
    }
    return 0;
}
/*the main logic here is to add(largest digit  * smallest digit)
to the a but if at any case smallest of it becomes 0 that is the
who l*s = 0 a will remain unchanged and thus we don't need to complete
all loops of k which will give us a tle 
so if (l*s) = 0 then break the loop as the given value of a will remain same
after that at any cost so this is the answer :)*/