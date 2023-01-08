#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n;
        cin >> n;
        if (n%2050 != 0)
        {
            cout<<"-1"<<"\n";
            continue;
        }
        ll a = n/2050;
        ll ans = 0;
        while (a)
        {
            ans +=a%10;
            a/=10;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/*we can write number in the format of 2050,20500,...in power of 10
so we are to write a number in the from of 2050+20500+.....or 2050(1+10+100.......);
so it is clear that number is divisible by 2050 
now by dividing the given number by 2050 we will get a number 
and that number is in the form of (10+100 or any other )
so we are just to calculate the sum of each and every digits and that will be the answer
for if the number is 123456 then we need to add 100000+2(10000)+3(1000)+4(100)+5(10)+6(1)
so in this 1+2+3+4+5+6 times 2050 is used :)*/