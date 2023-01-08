#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[5];
    int lucky[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 777, 774, 747, 744};
    int i = 0;
    for (int i = 0; i < 14; i++)
    {
        if (n % lucky[i] == 0)
        {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
    return 0;
}