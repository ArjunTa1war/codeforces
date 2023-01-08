#include <iostream>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int arr[n + 1];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > h)
        {
            ans += 2;
        }
        else
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}