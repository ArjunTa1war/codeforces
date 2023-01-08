#include <iostream>
#include <string.h>
void low(char *s1)
{
    int i = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += 32;
        i++;
    }
}
void up(char *s1)
{
    int i = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            s1[i] -= 32;
        i++;
    }
}
using namespace std;

int main()
{
    char s[101];
    cin >> s;
    int u = 0, l = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            l++;
        }
        else
        {
            u++;
        }
    }
    if (l >= u)
    {
        low(s);
    }
    else
    {
        up(s);
    }
    cout << s;

    return 0;
}