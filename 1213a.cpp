#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, odd = 0, even = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << min(odd, even) << "\n";
    return 0;
}
/*we are to check the number of odd and even numbers in it
as moving the number by 2 digits cost us 0 coin
and moving the number by 1 digits cost us 1 coin
we know that going from odd to odd will be even and it will
take 0 coins
and same as even - even = 0
so we are to find the minimum number of odd,even
if even is 6 and odd is 2 then the destination point must be
a even number and thus only 2 coins will be spent :)*/ 