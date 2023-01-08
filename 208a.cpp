#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int x = s.length();
    int count = 0;
    int a = 0;
    for (int i = 0; i < x;)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            count++;
            i = i + 3;
        }
        else
        {
            if (count > 0 && a > 0)
            {
                cout << " " << s[i];
            }
            else
            {
                cout << s[i];
                a++;
            }
            i++;
            count = 0;
        }
    }

    return 0;
}