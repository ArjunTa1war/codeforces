#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m - 1; i++)
        {
            cout << "W";
        }
        cout << "B\n";
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "B";
            }
            cout << "\n";
        }
    }
    return 0;
}
/*if we write it in the form of
wwwwb
bbbbb
bbbbb......then the number of w will be always 
b-1 and b=w+1 as w =  number of w that has atleast one black neighbor
and b = number of b that has atleast one white neighbor
so this is the best approach 
there are other options too like write w in the first place
and fill other places with b and in this way there will be two
b's and one w in every case and condition b=w+1 will be true here :)*/

//long method :)
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
//         int n, m;
//         cin >> n >> m;
//         int x = n * m;
//         if (x % 2 == 0)
//         {
//             cout << "BB";
//             for (int i = 2; i < m; i++)
//             {
//                 if (i % 2 == 0)
//                     cout << "W";
//                 else
//                     cout << "B";
//             }
//         }
//         else
//         {
//             for (int i = 0; i < m; i++)
//             {
//                 if (i % 2 == 0)
//                     cout << "B";
//                 else
//                     cout << "W";
//             }
//         }
//         cout << "\n";
//         for (int j = 1; j < n; j++)
//         {
//             for (int i = 0; i < m; i++)
//             {
//                 if (j % 2 == 0)
//                 {
//                     if (i % 2 == 0)
//                         cout << "W";
//                     else
//                         cout << "B";
//                 }
//                 else
//                 {
//                     if (i % 2 == 0)
//                         cout << "B";
//                     else
//                         cout << "W";
//                 }
//             }
//             cout << "\n";
//         }
//     }
//     return 0;
// }
/*in this appraoch i have checked whether the multipilcation is odd or even then 
if even i have written it in the form of 
bbwbwb
bwbwbw
wbwbwb
if multpication is odd then 
bwb
bwb
wbw
and so on in this condition also the number of b is 1 more than white :)*/