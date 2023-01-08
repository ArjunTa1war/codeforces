#include <iostream>
using namespace std;
void solve()
{
    int b[200001] = {0};
    int n, index, ans = 2000001, check = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        b[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[arr[i]] == 1 && arr[i] < ans)
        {
            ans = min(ans, arr[i]);
            index = i;
            check = 1;
        }
    }
    if (check == 1)
    {
        cout << index + 1 << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*we are just to check the least term which is occuring only for 1 time in the
whole array or we can see least and unique term if no such term then return -1 :)*/