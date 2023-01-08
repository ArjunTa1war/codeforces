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
        int n;
        cin >> n;
        if (n % 2 == 0) for (int i = 0; i < n / 2; i++)cout << 1;
        else
        {
            cout << 7;
            for (int i = 0; i < (n-3)/2; i++) cout << 1;
        }
        cout<<"\n";
    }
    return 0;
}
/*it is quite obvious that 99 is less then 111 and we don't need to
use any other digit other than 1 or 7 as these two digits are consuming
least number of segments if the number is odd then we will write it
in the form of 7111 else 1111 as it's the best way and all other numbers
consumes more segments which will decrease the number of digits :)*/ 