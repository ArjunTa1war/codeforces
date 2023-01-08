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
        if (n==1) cout<<0<<"\n";
        else if(n==2)cout<<1<<"\n";
        else if (n%2==0||n==3)cout<<2<<"\n";
        else cout<<3<<"\n";
    }
    return 0;
}
/*our main intention here is just to make every integer 2
now if the number is even we can make any integer 2 by dividing it with its
half in one step and this will go like x-2-1; 2 steps
if the number is odd that will go like this x - x-1 -2 - 1; 3steps
if the number is 3 then it will go like 3-2-1
and 2 will go like 2-1and this is the answer :)*/