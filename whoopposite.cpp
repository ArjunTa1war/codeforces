#include <iostream>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = abs(b - a);
    int ans;
    int length = x * 2;
    if (length < max(a, b) || length < c)
    {
        cout << -1;
        return;
    }
    else
    {
        int n = c + (length / 2);
        int s = c - (length / 2);
        if (n <= length)
        {
            cout << n;
        }
        else if (s > 0)
        {
            cout << s;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        solve();
        cout << "\n";
    }

    return 0;
}