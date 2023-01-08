#include <iostream>
#include <strings.h>
using namespace std;
 
int main()
{
    char str[101];
    cin >> str;
    char test[101];
    strcpy(test, str);
    int l = strlen(str);
    int x = l;
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (str[i] == test[j])
            {
                x= x-1;
                break;
            }
        }
    }
    if (x % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}