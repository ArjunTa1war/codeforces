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
        int x,y;
        cin>>x>>y;
        x = abs(x);
        y = abs(y);
        int ans = 2*max(x,y);
        if (x!=y)ans--;
        cout<<ans<<"\n";
    }
    return 0;
}
/*solution is we can reach the postion x,y by using 3 moves only
that is moving to east,north,or stay at the position
if we want to reach a,b then the solution can be
e?e?e?e?e?e...... or n?n?n?n?n...... 
or the other approach is find the minimum one then we need 2*x steps to reach it
and then find the maximum - minimum
we know that if max-min = 1 then we need 1 step and for every other value of max-min
we need 2 steps to make every move :)*/