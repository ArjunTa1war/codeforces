#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
   for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
            cout << 1;
        else
            cout << 0;
    }
    return 0;
}
// #include <iostream>
// #include <string>
// using namespace std;
// int *large(string str)
// {
//     int x = str.length();
//     int *arr = new int[str.size()];;
//     int a = 0;
//     while (a != x)
//     {
//         arr[a] = str[a] - '0';
//         a++;
//     }
//     return arr;
// }
// int main()
// {
//     string s1, s2;
//     cin >> s1 >> s2;
//     int *arr1 = large(s1);
//     int *arr2 = large(s2);
//     for (int i = 0; i < s1.length(); i++)
//     {
//         if (s1[i] != s2[i])
//             cout << 1;
//         else
//             cout << 0;
//     }

//     return 0;
// }//this is little bit complicated method