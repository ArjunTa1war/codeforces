#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, count = 0;
    cin >> n >> m;
    if (n <= 0)
    {
        cout << 0;
        return 0;
    }
    int i = 1;
    while (n)
    {
        n = n - 1;
         count++;
        if (i % m == 0)
        {
            n = n + 1;
        }
        if (n == 0)
        {
            break;
        }
       i++;
    }
    cout << count;
    return 0;
}

/*explaination
n socks will go for n days and at the mth day one pair is added on the other days substract 1 and 
on the mth day add 1 and hence check*/
// for (int i = 1; i <= 100000; i++)
// {
//     n = n - 1;
//     count++;
//     if (i % m == 0)
//     {
//         n = n + 1;
//     }
//     if (n == 0)
//     {
//         break;
//     }
// }