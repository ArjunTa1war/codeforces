#include <iostream>
#include<map>
using namespace std;

int main(){
    map<string,int>map;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        if (map[s]==0)
        {
            cout<<"OK"<<"\n";
            map[s] =1;
        }
        else
        {
            cout<<s<<map[s]<<"\n";
            map[s]++;
        }   
    }
    return 0;
}
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     char str[n + 1][33];
//     int arr[100001] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         int check = 0;
//         cin >> str[i];
//         for (int j = 0; j < i; j++)
//         {
//             if (strcmp(str[i], str[j]) == 0)
//             {
//                 cout << str[j] << arr[j] + 1 << "\n";
//                 check = 1;
//                 arr[j]++;
//                 break;
//             }
//         }
//         if (check == 0)
//             cout << "OK" << "\n";
//     }
//     return 0;
// }
//this answer is giving tle so solve it by stl>:)