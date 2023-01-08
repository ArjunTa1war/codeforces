#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
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
        int total = n;
        int arr[n], j = 0, k = 0;
        while (total--)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                arr[j] = x;
                j++;
            }
            else
            {
                arr[n - 1 - k] = x;
                k++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (gcd(arr[i], 2 * arr[j]) != 1)
                {
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
/*we are to write all even digits first as we are to take the gcd of (arr[i],2*arr[j])and when we will multiply
any integer with 2 then it's gcd will never be 1 with any of the even number
so first write all even integer than start writing the odd integer from the end and then 
we need to check the condition for each and every element 
order of odd integer don't matter as the gcd of(arr[i],2*arr[j])==arr[i],arr[j] for odd numbers :)*/