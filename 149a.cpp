#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, total = 0, ans = 0;
    ;
    cin >> k;
    int arr[13];
    arr[0] = 0;
    for (int i = 1; i <= 12; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 13);
    for (int i = 12; i >= 0; i--)
    {
        if (total >= k)
        {
            cout << 12-i<< "\n";
            break;
        }
        total += arr[i];
    }
    if (total < k)
    {
        cout << -1;
    }
    return 0;
}
/*we are just to keep on adding the total number of maximum number
in an array until it becomes greater then or equal to k so we are to find that only :)*/  