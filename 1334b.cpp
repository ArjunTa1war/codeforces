#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        ll n,x,extra=0,ans=0;
        cin>>n>>x;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for (int i = n-1; i >=0; i--)
        {
            if (arr[i]+extra>=x)
            {
                ans++;
               extra=extra+(arr[i]-x);
            }else
            {
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/*we are to start from the max value and keep on making equal to x
and the rest of the money i.e(a[i]-x)is kept as extra
now this extra will go on increasing till arr[i]>=x but after that this extra
will be used as an addition to arr[i]and we are to keep on adding (x-arr[i])
till our extra amount finishes amd in each case extra amount is getting decreased
i.e extra = extra+(-z)where z is difference between arr[i] and x and total
number of arr[i] greater than x will be
the answer :)*/


// #include <iostream>
// #include <algorithm>
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
//         ll n, x, extra = 0, ans = 0;
//         cin >> n >> x;
//         ll arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         sort(arr, arr + n);
//         for (int i = n - 1; i >= 0; i--)
//         {
//             if (arr[i] >= x)
//             {
//                 extra=extra+(arr[i]-x);
//                 ans++;
//             }
//             else if (extra>0)
//             {
//                 if (arr[i]+extra>=x)
//                 {   ans++;
//                     extra = extra-(x-arr[i]);
//                 }      
//                 else break;
//             }
//            else break;
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }