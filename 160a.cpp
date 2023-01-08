#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    float total = 0;
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        total = total + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum < total / 2)
        {
            count++;
        }
    }
    cout << n - count;
    return 0;
}