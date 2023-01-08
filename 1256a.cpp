#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        if (a * n + b >= s && s % n <= b)
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
/*we are just to check whether if we add x*n+y can it become
exact s or not so we are fist to check whether a*n+b greater than 
or equal to s or not then for making exact of s we need to have 
b more than s%n for eg if the 5 2 6 27 than 
we need to use 4*6 = 24 and we need to use 27-24 i.e 3 b :)*/
// #include <iostream>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         ll a, b, n, s;
//         cin >> a >> b >> n >> s;
//         ll x = a * n;
//         if (x <= s)
//         {
//             s = s - x;
//         }
//         else
//         {
//             s = s - (s / n) * n;
//         }
//         if (s <= b)
//         {
//             cout << "YES\n";
//         }
//         else
//         {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }