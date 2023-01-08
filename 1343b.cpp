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
        int a, sum = 0, check = 0;
        cin >> a;
        int arr[a];
        int j = 0;
        if ((a / 2) % 2 != 0)
        {
            cout << "NO\n";
            continue;
        }
        else
        {
            cout << "YES\n";
            for (int i = 2; i <= a; i = i + 2)
            {
                cout << i << " ";
                arr[j] = i;
                j++;
                sum += i;
            }
            for (int i = 0; i < (a / 2) - 1; i++)
            {
                cout << arr[i] - 1 << " ";
                check += (arr[i] - 1);
            }
            cout << sum - check << "\n";
        }
    }
    return 0;
}
// my approach
// as the numbers till 10 are 1,3,5,7,9 and 2,4,6,8,10;
// if the n/2 is even then only both the numbers can be even and thus
// they will print yes
//now as we know that even will be continuous and odd will also be 
//continous until the second last digit and then find the difference between 
// sum and check that will be odd so here the soln......