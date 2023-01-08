#include <iostream>
using namespace std;
int sol(int n)
{
    int arr[10] = {0};
    while (n)
    {
        int a = n % 10;
        arr[a]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 1)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        if (sol(i) == 1)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
/*we just need to go from l to r and check that does there exists a number n
such that it is having all of it's digits distinct or not :)*/