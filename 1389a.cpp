#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        int x = l;
        int y = 2*l;
        if (y>r)
        {
            cout<<"-1 -1\n";
        }
        else
        {
            cout<<x<<" "<<y<<"\n";
        }
    }
    return 0;
}
/*we are to take such two numbers which are between 
l and r can equal to l and r
so as there can be many solutions we can firstly take
l as the first numbers as it is the least among all
now if we take 2*l then the lcm will also be 2*l
 (it's the best condition that you can have)if 
you take any other number then lcm would be (n*l) as n>2 ;
but if r is less then 2*l then all the lcm's will go above
r and thus return -1 -1 here :) */