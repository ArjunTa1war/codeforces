#include <iostream>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << -1 << "\n";
    }
    else
    {
        for (int i = n; i >=1; i--)
        {
            cout<<i<<" ";
        }   
    }
    return 0;
}
/*logic is very simple 
we are given two condtions that is p[p[i]] = i and p[i] != i
that is if p[x] = y then p[y] should also equal to x for a perfect permutation
eg
perfect permuation is p[p[x]] should equal to x 
but p[x] != x so we are to take another number here
consider p[x]=y we can take this p[y] = x this is how condition is made :)
and we we just reveres the digits then also 1 comes at end place and n comes at first place and
this goes on if n is odd then it can the condition p[i] !=i will not come true that is the main
reason other approach is to just swap two digits you can swap any but easy option
is two swap two consecutive digits :)*/
//little bit lengthy approach :)
// #include <iostream>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     if (n % 2 == 1)
//     {
//         cout << -1 << "\n";
//     }
//     else
//     {
//         int arr[n + 1];
//         for (int i = 1; i <= n; i++)
//         {
//             arr[i] = i;
//         }
//         for (int i = 1; i <= n; i += 2)
//         {
//             int temp = arr[i];
//             arr[i] = arr[i + 1];
//             arr[i + 1] = temp;
//         }
//         for (int i = 1; i <= n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }