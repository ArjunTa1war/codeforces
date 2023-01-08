#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    int count = 0;
    for (int i = 0; i < s.length()-1; i++)
    {
        if (s[i]=='{'||s[i]=='{' || s[i]==','||s[i]==' ')
        {
           continue;
        }
        else
        {
           if (s[i] != s[i+1])
           {
               count++;
           }    
        }  
    }
    cout<<count;
    return 0;
}
// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     int arr[200] = {0};
//     char s[20000];
//     scanf("%[^\n]%*c", s);
//     int j = 0;
//     char check[20000];
//     for (int i = 0; i < strlen(s); i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             check[j] = s[i];
//             j++;
//         }
//     }
//     for (int i = 0; i < strlen(check); i++)
//     {
//         int x = check[i];
//         arr[x] = 1;
//     }
//     int ans = 0;
//     for (int i =97 ; i <= 122; i++)
//     {
//         if (arr[i] == 1)
//         {
//             ans++;
//         }
//     }
//     cout << ans;
//     return 0;
// }
//alternative but it's more efficient and can be use 
//for any purpose :)