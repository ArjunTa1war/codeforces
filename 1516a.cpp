#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int arr[n], total = k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] < k)
            {
                arr[n - 1] += arr[i];  
                k = k - arr[i];
                arr[i] = 0;
            }
            else
            {
                arr[i] = arr[i] - k;
                arr[n - 1] += k;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
/*in order to make this array  lexicographically  smaller we need to 
make every element of array from left as small as possible (it cannot be
negative so the smallest possible is 0) and we need to add the number of k
used in the arr[n-1]that is the last member of the array
as it is given in the question that if we are substracting any number by 1 in 
array we need to increase other by 1 so this is the approach for this
question :)*/