#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x= 1;
    while (n--)
    {
        if (x)
        {
            cout<<"I hate ";
            x = 0;
        }
        else
        {
            cout<<"I love ";
            x  = 1;
        }
        if (n>0)
        {
            cout<<"that ";
        }
        else
        {
            cout<<"it ";
        }
    }

    return 0;
}