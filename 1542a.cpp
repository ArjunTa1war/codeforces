#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, odd = 0, even = 0;
        cin >> n;
        int arr[2 * n];
        for (int i = 0; i < 2*n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == even)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
/*we know that only odd + even is odd else odd+odd and even+even is even 
thats why if number of odd integers is equal to even then only it is possible to 
make a set of two numbers for all elements whose sum is odd :)*/