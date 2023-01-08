#include <iostream>
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
        int n, ans = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = accumulate(arr, arr + n, 0);
        if (sum % n == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > sum/n)
                {
                    ans++;
                }
            }
            cout << ans << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}
/*explaination
we are given an array and we are to equalize that array
if it cannot be equalized return -1
else cout the answer we are to select those candidates whose
value is more than the avg. so that we can distribute their
values now if we distribute their values among all
then all will gain same number automatically as the condition
sum%n == 0 is true :)*/