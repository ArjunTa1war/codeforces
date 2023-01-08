#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if (n==0)
    {
        cout<<1;
        exit(0);
    }
    
    switch (n%4)
    {
    case 1:
        cout<<8;
        break;
    case 2:
        cout<<4;
        break;
    case 3:
        cout<<2;
        break;
    case 0:
        cout<<6;
        break;
    }
    return 0;
}
/*we know that last digit of 1378*1378*1378 is same as 8*8*8
so we are to check the last digit in the term 8^n
8*8 = 64 if n = 2 ans = 4
64*8 = 512 if n = 3  ans = 2
512*8 = 4096 if n = 4 ans = 6
4096*8 = 32767 if n = 5 ans = 8
we can notice that digits are repeating like 
8 4 2 6 8 4 2 6 .......... so we can easily get it by 
taking remider of n with 4 as there are 4 numbers and using switch 
we can eaily find the answer :)*/
