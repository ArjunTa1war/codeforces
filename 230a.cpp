#include <iostream>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    int arr[n], bonus[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cin>>bonus[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s > arr[j])
            {
                count++;
                s+=bonus[j];
                arr[j] = 10000000;
                break;
            }
        }
    }
    if (count == n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}