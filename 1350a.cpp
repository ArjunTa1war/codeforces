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
        int n, k;
        cin >> n >> k;
        for (int i = 2; i <= n; i++)
        {
            if (n%i==0)
            {
               n = n+i;
               break;
            }     
        }
        cout<<n+((k-1)*2)<<"\n";
    }
    return 0;
}
/*if the number is odd then the factor of n is a odd number and when we add odd to odd then it 
becomes even so for the rest of the (k-1)times we need to add 2 only 
as if the number is even then it's smallest positive divisor other than 1 is 2 :)*/