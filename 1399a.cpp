#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, count = 1;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + a);
        for (int i = 0; i < a - 1; i++)
        {
            if (arr[i + 1] - arr[i] > 1)
            {
                cout << "NO\n";
                count = 0;
                break;
            }
        }
        if (count == 1)
        {
            cout << "YES\n";
        }
    }
    return 0;
}