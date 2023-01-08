#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int j = 1;
    for (int i = 1; i <= 1e9; i++)
    {
        if (i % 3 == 0 || i % 10 == 3)
        {
            continue;
        }
        else
        {
            if (j == n)
            {
                cout << i;
                break;
            }
            j++;
        }
    }
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
        cout << "\n";
    }

    return 0;
}