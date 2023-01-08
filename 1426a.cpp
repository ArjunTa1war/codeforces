#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        float n, x;
        cin >> n >> x;
        if (n<=2)
        {
            cout<<1<<"\n";
            continue;
        }
        
        n = n - 2; //as the first one is having 2 apartments
        cout << 1 + ceil(n / x)<<"\n";
    }

    return 0;
}
/*as the first floor is having 2 apartments and the rest is
having x departments so reduce the n by n-2 and add this to
floor and then divide the n by x if the value we get is above
than a integer then we are to print the value greter then the 
integer i mean next integer value :)*/