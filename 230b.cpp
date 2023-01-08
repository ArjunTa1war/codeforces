#include <iostream>
#include <math.h>
using namespace std;
int arr[10000000] = {0};
int main()
{
    arr[0] = arr[1] = 1;
    for (int i = 2; i * i <= 10000000; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= 10000000; j += i)
            {
                arr[j] = 1;
            }
        }
    }
    int n;
    cin >> n;
    while (n--)
    {
        long long x, sq;
        cin >> x;
        sq = sqrt(x);
        if (sq * sq == x && arr[sq] == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
// #include <iostream>
// #include <math.h>
// using namespace std;
//    int arr[10000000];
// int main()
// {
//     arr[0] =1 ; arr[1] =1;
//     for (int i = 2; i*i <= 10000000; i++)
//     {
//         if (arr[i]==0)
//         {
//             for (int j = 2; i*j<=10000000; j++)
//             {
//                 arr[i*j] = 1;
//             }
//         }
//     }
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         long long a;
//         cin>>a;
//         long long sq = sqrt(a);
//         if (sq * sq == a && arr[sq]== 0)
//         {
//             cout << "YES\n";
//         }
//         else
//         {
//             cout<<"NO\n";
//         }

//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int a, count = 0;
//         cin >> a;
//         for (int j = 2; j <= a / 2; j++)
//         {
//             if (a % j == 0)
//             {
//                 count++;
//                 if (count > 2)
//                 {
//                     break;
//                 }
//             }
//         }
//         if (count == 1)
//         {
//             cout << "YES\n";
//         }
//         else
//             cout << "NO\n";
//     }
//     return 0;
// }giving tle :)

