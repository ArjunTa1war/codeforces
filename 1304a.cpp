#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, a, b, ans = 0, check = 0;
        cin >> x >> y >> a >> b;
        int d = y - x;
        int one_step = a + b;
        if (d % one_step == 0)
        {
            cout << d / one_step << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}
/*first we need to find the total distance between two rabbits
now we need to find how much distance does the both the rabits are covering
in one second if the total distance is divisble by their one second distance
than the answer is d/one_step otherwise -1 
As if d - one_distance is the new distance between two rabbits and if
it can get 0 at any point then the answer is possible 
rabit a is moving with the speed of a thus the position of a after time t is
x+at and same for other rabit i.e y-bt now we need to equate their 
positions x+at=y-bt == y-x/a+b = t 
now t must be integer so this is also a approach :)*/