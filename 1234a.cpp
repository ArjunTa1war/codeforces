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
        int n, sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum % n == 0)
        {
            cout << sum / n << "\n";
        }
        else
        {
            cout << (sum/n)+1 << "\n";
        }
    }
    return 0;
}
/*we are to equalize all the prices or the numbers in an array such that each element
is same but if the total of all the numbers becomes less than the original/previous one
then we need to add 1 to each value and thus average will also be increased by one
and in this way we can get the least price that((note sum>=n))
a shopkeeper should keep in order to have no loss and have 0 or more profit when he will sell 
all the products :)*/