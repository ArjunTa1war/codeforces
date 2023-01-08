#include <iostream>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,sum =0,ans =0,m = INT_MAX,index = 0;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (i - index + 1 == k)//condition if k =3 then it will first check for the positon 0,1,2then 1,2,3
        {
            if (sum < m)
            {
                m = sum;
                ans = index;
            }
            sum -= arr[index];
            index += 1;
        }
    }
    cout<<ans+1;
    return 0;
}
//take copy and pen then easy to understand if ever find it difficult :)
//question is easy but will give tle on a normal kind of appraoch
/*we will first take any array then we will keep on adding it like the array is
1 2 3 4 5 6 and the sum will be 1,3,6,10,15,21 if we are to find the sum of 3 consecutive digits
like k = 3 then we will first check at position 3 and then at positon 10 - arr[0]
this is how we will appraoch to the answer :)*/

// #include <iostream>
// #include <numeric>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, k, ans;
//     cin >> n >> k;
//     int arr[n + 1];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int m = accumulate(arr, arr + k, 0);
//     ans = 1;
//     for (int i = 0; i < n - k; i++)
//     {
//         int a = accumulate(arr + i, arr + k + i, 0);
//         if (m > a)
//         {
//             m = a;
//             ans = i + 1;
//         }
//     }
//     cout << ans;
//     return 0;
// }
// //giving tle