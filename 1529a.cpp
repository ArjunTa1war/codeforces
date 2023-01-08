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
        int n, lowest_no = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[0])
            {
                lowest_no++;
            }
            else
            {
                break;
            }
        }
        cout << n-lowest_no << "\n";
    }
    return 0;
}
/*explaination
denote mn as the minimum element of array a ,in each operation
pick mn and the element x now
(x+mn)/2 < x this condition will always be true as mn is less than x
so in this way x will be deleted as we are given that
delete all the numbers greater than avg in subarray acc. to question
so we are just to count the total number of minimum numbers present in the array
as they cannot be deleted and all oters can be deleted :)*/
