#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << n / 2 << "\n";
    if (n % 2 == 0)
    {
        for (int i = 0; i < n/2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        for (int i = 0; i < (n/2) - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }
    return 0;
}
/*explaination
any number can be define as the sum of 2 or 3 and these are the lowest prime
number available and thus if we are given any number first then we
need to express it in the form of sum of prime number such that we take the max
number of terms that's why take 2 first and if its odd then one 3 need to be added
so thats why (n/2)-1 2's and one 3:)*/