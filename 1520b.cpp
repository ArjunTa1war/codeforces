#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ans=0;
    for (int i = 1; i <= n; i = i*10+1)
    {
       for (int j = 1; j <= 9; j++)
       {
           if (i*j<=n)
           {
              ans++;
           }
       }
    }
    cout<<ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
/*in this will check for all 1 to 10 then 11 to 111 then so on upto n
and keep on adding the ans like first 1 then 11 then 111 and thus we will check it :)*/
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n, d = 0;
//         cin >> n;
//         int n_copy = n;
//         int ans = 0;
//         while (n)
//         {
//             n /= 10;
//             d++;
//         }
//         ans = (d-1)*9;
//         int number = 0;
//         while (d)
//         {
//             number += pow(10, d - 1);
//             d--;
//         }
//         ans += (n_copy / number);
//         cout << ans<<"\n";
//     }
//     return 0;
// }
/*explaination
in this we know that count total number of digits and then substract it by 1 and multiply it by 9
as in interval 1 to 10 there are 9 digits and 10 to 100 there are also 9 digits and so on
now make the number in the forom of 11,111,1111 and thus because the number will be oridnany if and
only if it is same and it must be divided by 11 if the digit is 2 and so on 
for eg if the number is 555 then total number of digits till 100 is (3-1)*9 = 18
and then write it in the terms of 111 and thus divide by it then add it if the number is 554 then it will 
give 4 if number greter than or equal to 555 it will give out 5 so that is the approach that i have
used :)*/