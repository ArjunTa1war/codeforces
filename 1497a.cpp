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
        int arr[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int j = 0;
        cout << arr[0] << " ";
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
            {
                b[j] = arr[i];
                j++;
            }
            else
            {
                cout << arr[i] << " ";
            }
        }
        for (int i = 0; i < j; i++)
        {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
/*we are to sort the array and by doing that mex will be maximized 
and if we write all the repeted digits at the end(in any order)it will not effect it
and this is the required solution
mex is the minimum whole number that is not present in the set :)*/