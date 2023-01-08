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
        if (n==2)cout<<2<<"\n";
        else if(n%2==0)cout<<0<<"\n";
        else cout<<1<<"\n";
    } 
    return 0;
}
/*it is quite obvious that 
even+even = even so n is e+e+e = even
odd + odd = even so n is o+o+e = even
even + odd = odd so n is e+o+o = even 
so we can make any n in the form of 
a+b=c if it is even otherwise we need to add one matchstick to make
odd to even but if n=2 then the least possible solution is 1+1=2 
total 4 that's why we need to add 2 :)*/