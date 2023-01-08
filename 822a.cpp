#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,b;
    cin>>a>>b;
    long long x = min(a,b);
    long long ans = 1;
    for (int i = 1; i <= x; i++)
    {
        ans*=i;
    }
    cout<<ans;
    return 0;
}
/*we are just to find the gcd(a!,b!)it is obvious that a! = 1*2*3*4.....and
b! = 1*2*3*4......and the factorial of smaller one will be the gcd :)*/