#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, ans = 0;
    cin >> n >> m;
    if (m % n != 0)
        cout << -1 << "\n";
    else
    {
        int a = m / n;
        int ans = 0;
        while (a)
        {
            if (a == 1)break;
            else if (a % 3 == 0)    a /= 3;   
            else if (a % 2 == 0)  a /= 2;   
            else
            {
                cout << -1 << "\n";
                exit(0);
            }
            ans++;
        }
     cout << ans << "\n";
    }
    return 0;
}
/*we are to make  m from n by just multiplying it either by 2 or 3
so we are first to check whether m is divided by n or not
then we are to check  which number we need to multiply to n to make it
m suppose that digit be d we are to check whether we can make d by using digits
2 and 3 only or not if yes then cout ans else -1 :)*/