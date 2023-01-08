#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        char s[n+1];
        for (int i = 0; i < a; i++)
        {
            s[i] = 'a'+i%b;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<s[i%a];
        }
        cout<<"\n";
    }
    return 0;
}

/*now we are to take b distinct letters in b interval 
so the best approach is to write b digits 
then just duplicate it till the a;
now we are to find the string of length n therefore we just need to
replicate a till n as if we remove first letter then first letter should be added
as this is the original case :)*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int n, a, b;
//         cin >> n >> a >> b;
//         char s[n + 1];
//         int j = 0;
//         for (int i = 0; i < a; i++)
//         {
//             if (j == b)
//             {
//                 j = 0;
//                 i--;
//             }
//             else
//             {
//                 s[i] = 'a' + j;
//                 j++;
//             }
//         }
//         int ans = 0;
//         while (n--)
//         {
//             if (ans < a)
//             {
//                 cout << s[ans];
//                 ans++;
//             }
//             else
//             {
//                 ans = 0;
//                 n++;
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }
//code is too large but still good and working
