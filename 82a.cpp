#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int x = 0, a = 0;
    while (a < n)
    {
        a = a + 5 * pow(2, x);
        x++;
    }
    x--;//this is the last value fo x where the condition a<n is true
    a = a-5*pow(2,x);//this is the last value of a where condition a<n is true
    n = n - a;//by doing this we are into other series that is in that series each name will appear for x times
    int d = pow(2,x);//this is how many same names are present in a series
    if (n <= 1*d)
    {
        cout << "Sheldon";
    }
    else if (n <= 2*d)
    {
        cout << "Leonard";
    }
    else if (n <= 3*d)
    {
        cout << "Penny";
    }
    else if (n <= 4*d)
    {
        cout << "Rajesh";
    }
    else if (n <= 5*d)
    {
        cout << "Howard";
    }
    return 0;
}
/*explaination
we are given series in the order 1 2 3 4 5 1 1 2 2 3 3 4 4 5 5 1 1 1 2 2 2............and so on
firstly we are to find the format of the series which occurs at the time of n and then we are
to find the name at nth series :)*/
