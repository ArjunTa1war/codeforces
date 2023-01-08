#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int a = 2;
        int b = n-(n%2);
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}
/*we are to find two number a and b such that p%a = p%b so we know that p is prime
it mean that it is odd and first number we take is 2 now as the number is odd
therfore n%2==1 and thus we need to take the number n-1 as n%n-1 = 1 :)*/