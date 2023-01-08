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
        int n, ans = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            int a = max(arr[i], arr[i + 1]);
            int b = min(arr[i], arr[i + 1]);
            if (a > 2 * b)
            {
                while (a > 2 * b)
                {
                    ans++;
                    b *= 2;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
/*explaination
we are just to check that between two adjecent numbers the max/min should be less than equal to 2
if not then add numbers to add we are just to find the total numbers we can add to it :)*/