#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)cin >> arr[i];
    sort(arr, arr + n);
    if (k == 0)
    {
        if (arr[0] == 1) cout << "-1";   
        else cout << 1 << "\n";
        return 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (i == k - 1 && arr[i] == arr[i + 1]){
            cout << "-1";
            return 0;
        }
    }
    cout << arr[k - 1] << "\n";
    return 0;
}
/*we are to find a number x such that there are exactly k numbers
in it such that they are less then or equal to x 
so we can first sort the array and check the index k 
(k-1)as array is starting from 0
so if there is same number after that number at index k-1
then cout -1 as then the elements can never be exact k
now comes the situtation of k=0
as this condition is not being checked in the array
so if the k=0 then we are to check whether there exists a number
such that no number is less than it, we can cout 1 if the lowest
number is not 1 otherwise no such value of x exists :)*/