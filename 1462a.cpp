#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        int x = 0;
        int y = 0;
        for (int i = 0; i < a; i++)
        {
            if (i % 2 == 0)
            {
                cout << arr[x] << " ";
                x++;
            }
            else
            {
                cout << arr[a - 1-y] << " ";
                y++;
            }
        }
        cout << "\n";
    }
    return 0;
}
/*first write the 1st then last 
then 2nd then 2nd last and this series will go on :)*/