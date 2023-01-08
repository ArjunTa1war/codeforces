#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin>>k;
        int a = sqrt(k);
        if ((a*a)==k)
        {
            cout<<a<<" "<<1<<"\n";
        }
        else
        {   a++;
            int x =(a*a - (a-1));
            if (k==x)
            {
                cout<<a<<" "<<a<<"\n";
            }else if (k>x)
            {
                cout<<a<<" "<<a-(k-x)<<"\n";
            }else if(k<x)
            {
                cout<<a-(x-k)<<" "<<a<<"\n";
            }
        }
    } 
    return 0;
}

/*we can notice that the 1st element of each row is a sqare of the number
and if the number is 5 then it's square number is 3 as it is greater than 2^2
that is 4 that's why a is changed to a++
a where a the ath row and then we are to find the point where the row=column
and we are to check the condition there 
if k<x then it's column will be same but row will go on decreasing as the
difference of x and k increase
if k>x then row will remain same but column will go on decreaseing
so this is the simplest approach :)*/