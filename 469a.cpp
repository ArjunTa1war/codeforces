#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y;
    int arr[2 * n + 1];
    int ans = 0;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    cin >> y;
    for (int i = x; i < x + y; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < x + y; j++)
        {
            if (i == arr[j])
            {
                ans++;
                break;
            }
        }
    }
    if (ans == n)
        cout << "I become the guy.";

    else
        cout << "Oh, my keyboard!";

    return 0;
}
