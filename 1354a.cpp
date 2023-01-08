#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll ans = b;
        if (b >= a)
        {
            ans = b;
        }
        else if (b < a && c <= d)
        {
            ans = -1;
        }
        else
        {
            ll time_left = a - b;
            ll extra = c - d;
            ll total = time_left / extra;
            if (time_left % (c - d) == 0)
            {
                ans += total * c;
            }
            else
            {
                ans += (total + 1) * c;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
/*polycarp need atleast a minutes of sleep and initially polycarp is having
the b sleep now for evey (C-d)min of sleep he is spending c minutes
so we are to make b+n(c-d) greater than or equal to a
and for every n (c)minutes are spent and thus the answer is 
b+(n*c) :)*/