#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int x = str.length();
    char vow[13] = "aeiouyAEIOUY";
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (str[i]==vow[j])
            {
                str[i] = ' ';
            }
            
        }
    }
    for (int i = 0; i < x; i++)
    {
        if (str[i]==' ')
        {
           continue;
        }
        else
        {
            cout<<"."<<str[i];
        }
    }
    return 0;
}