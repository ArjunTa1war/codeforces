#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = 0,b=0,c=0,d=0;
    int ans = 0;
    while (n--)
    {
        int x;
        cin>>x;
        if (x==1) a++;
        if (x==2) b++;
        if (x==3) c++;
        if (x==4) d++;
    }
    ans+=d;//for 4 cases in a single grp
    ans+=c;//for 3 cases in a single grp
     a = a-c;
    if (a < 0) a = 0;
    if (b%2 == 0)//for 2 cases in a single grp
    {
        b = b/2;
        ans +=b;
    }
    else
    {
        b = b/2+1;
        ans+=b;
        a = a-2;
        if (a < 0) a=0;
    }
    a =ceil(a/4.0);
    ans += a;
    cout<<ans;
    return 0;
}
// #include <iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n + 1];
//     int sum = 0, ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     sort(arr,arr+n);
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 4)
//         {
//             ans++;
//             arr[i] = 0;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 3)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (arr[i] + arr[j] == 4)
//                 {
//                     arr[j] = 0;
//                     arr[i] = 0;
//                     ans++;
//                 }
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//         if (sum > 4)
//         {
//             ans++;
//             sum = arr[i];
//         }
//     }
//     if (sum > 0)
//     {
//         ans++;
//     }

//    printf("%d",ans);

//     return 0;
// }
///the above code is giving the tle 