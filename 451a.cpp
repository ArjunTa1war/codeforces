#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    int count = 0;
    while (1)
    {
        a = a - 1;
        b = b - 1;
        count++;
        if (a == 0 || b == 0)
        {
            break;
        }
    }
    if (count % 2 == 0)
        cout << "Malvika";
    else
        cout << "Akshat";

    return 0;
}