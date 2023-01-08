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
        int x, y, n;
        cin >> x >> y >> n;
        int z = (n/x)*x;//maximum a which can be divided by x;
        if (z+y<=n)
        {
            cout<<z+y<<"\n";
        }
        else
        {
           cout<<z-x+y<<"\n";
        }
    }
    return 0;
}
/*we are to find the largest number which on divinding by x gives out the remainder 
y and that largest number should be less than n so we will find the closest number to n
which on dividing gives out the remainder 0  so it is possible only if we 
write (n/x)*x here the remainder will be removed so z+y will give out the remainder
y but if it is greter than n then substract it by x :)*/

//  #include <iostream>
// using namespace std;
 
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         int x, y, n;
//         cin >> x >> y >> n;
//         int z = (n-y)/x;
//         cout<<x*z+y<<"\n";
//     }
//     return 0;
// }
/*this one is normal one its nothing more than simple mathematics
here z is the largest number which on dividing by x gives the remainer y
but it's geneeal expression the upper one is more good
as we have decreased remainder firstly we will add it to it now it is simple :)*/