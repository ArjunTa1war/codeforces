#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[101];
    cin >> s;
    int total = 1;
    int length = strlen(s);
    for (int i = 0; i < length - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            total++;
            if (total == 7)
            {
                break;
            }
        }
        else
        {
            total = 1;
        }
    }
    if (total == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}