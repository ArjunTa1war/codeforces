#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i % 2 != 0)
            {
                cout << "#";
            }
            if (i % 4 == 2)
            {
                for (int i = 0; i < b - 1; i++)
                {
                    cout << ".";
                }
                cout << "#";
                break;
            }
            else if (i % 4 == 0)
            {
                cout << "#";
                for (int i = 0; i < b - 1; i++)
                {
                    cout << ".";
                }
                break;
            }
        }
        cout << "\n";
    }

    return 0;
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int z = 0;
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             if (i % 2 == 0)
//                 cout << "#";
//             else if (z == 0)
//             {
//                 for (int i = 0; i < b-1; i++)
//                 {
//                    cout<<".";
//                 }
//                 cout<<"#";
//                 z=1;
//                 break;
//             }
//             else if (z==1)
//             {
//                cout<<"#";
//                 for (int i = 0; i < b-1; i++)
//                 {
//                    cout<<".";
//                 }
//                 z =0;
//                 break;
//             }
//         }
//         cout << "\n";
//     }

//     return 0;
// }
