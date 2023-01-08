#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < m; j++)
    {
        int l, ans = 0;int check[100001] = {0};
        cin >> l;
        for (int i = n; i >= l; i--)
        {
            if (check[arr[i]] == 0)
            {
                ans++;
                check[arr[i]] = 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}