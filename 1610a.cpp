#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    if (x==1&&y==1)cout<<0<<"\n";
    else if (min(x,y)==1)cout<<1<<"\n";
    else cout<<2<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*it is quite obvious that if we take two cells
that is x1,y1 , x2,y2
we will get b1,b2 that is distance of it from x,y(the hidden cell)
now the equation
|x1-x|+\y1-y\=d1;
\x2-x|+|y2-y|=d2; now we know x1,x2,y1,y2,d1,d2 so we can easily find 
x and y as there are two equations
so we can see that atmost 2 cells are required
if the x=1,y=1 then we don't need to select any as it is quite obvious that
there is only one cell and it is hidden 
if any of the x or y is one then we need only one cell as it is obvious
that either [x-x1] or [y-y1] is 0 and if anyone is non zero then we can equate
it with d :)*/