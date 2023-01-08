#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k, maximum;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int z = 0;
        maximum = accumulate(a, a + n, z);
        sort(a, a + n);
        sort(b, b + n);
        for (int i = 0; i < k; i++)
        {
            if (a[i] < b[n - i - 1])
            {
                a[i] = b[n - i - 1];
                int s = accumulate(a, a + n, z);
                maximum = max(maximum, s);
            }
        }
        cout << maximum << "\n";
    }
    return 0;
}/*explaination
in this we are given two arrays and we can do swapping for k times such that 
a becomes largest and thus we will run a loop for k times  such that the largest in the
b get swapped with a lowest and that's the only way by which we can maxmize a:) */