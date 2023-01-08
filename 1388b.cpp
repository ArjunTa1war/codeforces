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
        int a = n/4;
        if (n%4!=0)a++;
        for (int i = 0; i < n-a; i++) cout<<9;
        for (int i = 0; i < a; i++)cout<<8;
        cout<<"\n";
    }
    return 0;
}
/*appraoch is simple we are to make the r max and x least
and it is simple r is binary from and we are to reduce n digits from it
now the x should be 8 or 9 only as 
these two numbers takes 4 places when represented in a binary as we are to find
the max r(where we are to delete n digits from the last that's why number of digits must
be more)
now the minimum number is 8 now it can be noticed that 
if we are find the 8 digits number it should be 9.....88 because 
it ends with 10001000 and 99..9999 ends with 10011001 and in both cases we are to delete 
the last 8 digits that's why 9...88 == 9......99 and we are to take the minimum one
that's the whole answer :)*/