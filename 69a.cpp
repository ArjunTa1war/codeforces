#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 1][4];

    int sol = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            ans += arr[j][i];
        }
        if (ans == 0)
        {
            sol += 1;
        }
        else
        {
            break;
        }
    }
    if (sol == 3)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
