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
        int n;
        cin >> n;
        int arr[n];
        int ans = n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 1; i < n; i++)
        {
            if (arr[i]<=arr[i-1])arr[i]++;
        }
        for (int i = 1; i < n; i++)
        {
            if (arr[i]==arr[i-1])
            {
                ans--;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
/*logic is we are to maximize the number of distinct elements in the
array but we can either leave the number as it is or we can add 1 to any 
particular number so if the number of less than or equal to the previous
digit then add the given number with 1 and then this will be max possible 
number of distinct digits and in the end we are to remove all the same digits
by using a loop :)*/