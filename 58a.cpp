#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[101];
    char c[6] = "hello";
    cin >> s;
    int x = strlen(s);
    int j = 0;
    int check = 0;
    for (int i = 0; i < x; i++)
    {
        if (s[i] == c[j])
        {
            j++;
            check++;
        }
        if (check == 5)
        {
            break;
        }
    }
    if (check == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}