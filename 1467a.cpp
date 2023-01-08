#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << 9;
        else if (n == 2)
            cout << 98;
        else if (n == 3)
            cout << 989;
        else
        {
            cout << 989;
            for (int i = 0; i < n - 3; i++)
            {
                cout << arr[i % 10];
            }
        }
        cout << "\n";
    }
    return 0;
}
/*if we stop the 2nd number than the number will be started by 989 
so it is optimal to pause the 2nd panel and there will not be any number
which can be created that is greater then the one starting with 989 
so the series becomes 98901234567890123........) :)*/