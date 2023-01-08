#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 2 * n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " " << arr[2 * n - i - 1]<<" ";
     
        }cout<<"\n";
    }
    return 0;
}
/*logic is write the array in the form of
min max min  max in this way min + min /2 is always less than max
and max+max/2 is always greater than the min and we are to do the same
and thus this is the solution :)*/