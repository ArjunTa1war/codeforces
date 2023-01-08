#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
ll  a[100];
ll  b[100];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n;
        cin >> n;
        ll int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll  x = *min_element(a, a + n);
        ll y = *min_element(b, b + n);
        for (int i = 0; i < n; i++)
        {
            ll s = a[i] - x;
            ll n = b[i] - y;
            count+=max(s,n);
        }
        cout<<count<<"\n";
    }
    return 0;
}
/*now as first array is given and 2nd array we can either substract from 1 or both to make it the
minimum of their respective arrays so we will find their minimum and substract min for each element
and this operation will be done to both the arrays until both of them reach their max value
as we are to find the highest number of steps taken by any array as the oher one steps would be less than
this so in this way conditon of both the arrays can be satisfied 
and take arrays size globaly as it will give error on numbers greter then 9 digits :) and stack overflow will 
happen :)*/

// #include <iostream>
// #include <algorithm>
// #define ll long long
// using namespace std;
// void solve()
// {
//     ll a[100];
//     ll b[100];
//     ll n;
//         cin >> n;
//         ll int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }
//         ll x = *min_element(a, a + n);
//         ll y = *min_element(b, b + n);
//         for (int i = 0; i < n; i++)
//         {
//             ll s = a[i] - x;
//             ll n = b[i] - y;
//             count += max(s, n);
//         }
//         cout << count << "\n";
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//      solve();   
//     }
//     return 0;
// }