#include <iostream>
#define ll long long
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        ll a,b;
        cin>>a>>b;
       ll x = a*b;
       if (b==1)
       {
           cout<<"NO\n";
           continue;
       }
       cout<<"YES\n";
       if (b<=3)
       {
           cout<<a<<" "<<2*a<<" "<<3*a<<"\n";
       }else
       {
           cout<<a<<" "<<x-a<<" "<<x<<"\n";
       }
    }
    return 0;
}
/*if b = 1 then the all multiple of a will be the good number
but we want only 1 good number so in this case cout NO
wherees in other cases we can make a equation 
such that x+y = z such that 1 of them is good number and the rest two
is nearly good number I.e divided by a only 
so in this case we can type a and then x-a and x 
or we can say that A.x + A.y = A.B
and x+y=b so we can take such numbers in this case if b is less then
3 then we can take integer like a + 2a = 3a and if the integer is greater
than 3 then we can take both the values less then a*b such that the 
first one is a itself and other one is x-a and that number is not divisible
by a*b as the first number that is divisible by a*b is a*b itself
in this way we can write the digits :)*/