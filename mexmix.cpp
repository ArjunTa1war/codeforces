#include <iostream>
using namespace std;
int arr[10000000];
void solve()
{
    int a, b;
    cin >> a >> b;
    int x = arr[a];
    if (x == b)
        cout << a << "\n";
    else if ((x ^ b) == a)
    {
        cout << a + 2 << "\n";
    }
    else
    {
        cout << a + 1 << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    arr[0] = 0;
    for (int i = 1; i <= 3e5; i++)
    {
        arr[i] = arr[i - 1] ^ (i - 1);
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
