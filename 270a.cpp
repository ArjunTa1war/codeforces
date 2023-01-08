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
        float a;
        cin >> a;
        float j = 0;
        while (1)
        {
            float z = (180 * (j+1)) / (3 + j);
            if (z == a)
            {
                cout << "YES\n";
                break;
            }
            if (a < z)
            {
                cout << "NO\n";
                break;
            }
            j++;
        }
    }
    return 0;
}
/*we know that all possible polygons are
which are regular are 3sided,4 sided and so on
now 3 sided polygon will have 180 angle
    4 sided polygon will have 180*2 angle;
    5 sided polygon will have 180*3 angle;
    so make a formula according to that and go at the place strictly greater than
    a if it matches a then cout yes if not then cout NO :)*/