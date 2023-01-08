#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll a;
        ll check = 0;
        cin >> a;
        while (a>2)
        {
            if (a %2 ==1)
            {
                cout<<"YES\n";
                check = 1;
                break;
            }     
            a = a / 2;
        }
        if (check==0)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
/*explaination
we are just to check whether the niumber is divided by any odd integer
or not if yes then print yes and if there is no number exists then 
just print no 
so start by end and we are to find such a way that 2*x = a and if x is odd then it is the odd
divisor of the number :)
*/