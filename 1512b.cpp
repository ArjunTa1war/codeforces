#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        char s[n][n];
        int a = 0, b = 0, c = 0, d = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                if (s[i][j] == '*')
                {
                    if (a == 0 && b == 0)
                    {
                        a = i;
                        b = j;
                    }
                    else
                    {
                        c = i;
                        d = j;
                    }
                }
            }
        }
        if (a == c)
        {
            if (a==0)
            {
                a+=2;
                c+=2;
            }
            
            s[a-1][b] = '*';
            s[c-1][d] = '*';
        }
        else if (b == d)
        {
             if (b==0)
            {
                b+=2;
                d+=2;
            }
            s[c][b-1] = '*';
            s[a][d-1] = '*';
        }
        else
        {
            s[a][d] = '*';
            s[c][b] = '*';
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << s[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}
/*approach is simple we are just to find the location of two asterisk symbols
and then we are to locate the two more asterisk symbol in such a way that these 4
symbols make a rectangle
so conditions are given but if the a=c and a = 0and c=0 then we are to locate
asterisk symbol on a=1 in order to do that we will add 2 to a because 2-1 = 1
as in this case we will not need to change the whole condition of s[a-1]
same in other case also and make a graph using paper and pen it would become
more simple :)*/