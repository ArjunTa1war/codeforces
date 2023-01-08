#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        char str[100];
        int a = 0;
        scanf("%s", str);
        int b = strlen(str);
        for (int i = 0; i < x; i++)
        {
            for (int j = i+1; j <x ; j++)
            {if (str[j]<str[i])
            {
                a++;
            }
            
            }
            
        }
        

        cout << a << endl;
    }

    return 0;
}