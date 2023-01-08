#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        int count = 1;
        while (1)
        {
            if (count>=n)
            {
                cout << "YES\n";
                break;
            }
            if (w % 2 == 0)
            {
                count*=2;
                w /= 2;
            }
            else if (h % 2 == 0)
            {
                 count*=2;
                h /= 2;
            }
            else
            {
                cout << "NO\n";
                break;
            }
           
        }
    }

    return 0;
}
/*cut the sheet if either h or w are even when we
will cut 1 sheet will turn to 2 then to 4
and if the number of sheets goes above the value of n
then print yes otherwise no :)*/