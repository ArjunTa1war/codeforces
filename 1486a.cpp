#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n, sum = 0, total = 0, count = 0;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            total += i;
            if (sum < total)
            {
                cout << "NO\n";
                count = 1;
                break;
            }
        }
        if (count == 0)
        {
            cout << "YES\n";
        }
    }
    return 0;
}
/*explaination
we are to keep on checking that 
in order to make the strick increasing sequence the minimum
possible answer is 0 1 2 3 4 5 and that's all
and the sum till nth number should have atleast the total of n number
and this is the required answer :)*/
