#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, r, ans = 0;
    cin >> k >> r;
    int x = k;
    while (1)
    {
        if (k % 10 == r||k%10==0)
        {
            ans++;
            cout << ans << "\n";
            break;
        }
        else
        {
            k = k + x;
            ans++;
        }
    }
    return 0;
}