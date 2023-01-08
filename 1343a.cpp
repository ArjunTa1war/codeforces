#include <iostream>
#include <math.h>
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
        int x = 1;
        for (int i = 1; i < a; i++)
        {
            x += pow(2, i);
            if (a % x == 0)
            {
                cout << a / x;
                break;
            }
        }
        cout<<"\n";
    }

    return 0;
}
/*explaination
we we are given an equation
which can be written as 
x*(sum of the numbers in the power of 2(1,2,4,8 ans so on) = n so the k >1 so we have to find the
very next integer which divides the  n without giving any remainder so that will be first positive
value of x and thus answer is this)*/