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
        if (n<=30)
        {
           cout<<"NO\n";
        }else
        {
            cout<<"YES\n";
            int x= n-30;
            if (x==6||x==10||x==14)
            {
            cout<<"6 10 15"<<" "<<x-1<<"\n";
            }
            else cout<<"6 10 14"<<" "<<x<<"\n";
        }
    }
    return 0;
}
/*we are just to find the 4 different digits such that atleast 3 of them should be nearly prime
so three least lowest prime numbers are 6 10 14
as they are the product of two prime numbers that's why they are called nearly prime
numbers so if the number is less than equal to 30 then it cannot be represented in
the form but if the n is greater then 30 we can write it as 6 10 14 (n-30)
but if the n-30 is equal to 6 10 14 then all the digts will not be different in
 order to do that we can add 1 in 14 as 15 is also nearly prime 
 so we need to print x-1 in order to compensate the sum :)*/