#include <iostream>
using namespace std;
int digitsum(int n)
{
    int total = 0;
    while (n)
    {
        total += n % 10;
        n /= 10;
    }
    return total;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a = n;
    int total = 0;
    for (int i = n; i <= 1005; i++)
    {
        if (digitsum(i) % 4 == 0)
        {
            cout << i << "\n";
            break;
        }
    }
    return 0;
}
/*we are to find a number such that the sum of it's digit is divisbile by 4
and that number should be greater then or equal to the given integer n
and this is the solution :)*/