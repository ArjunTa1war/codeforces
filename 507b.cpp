#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
    float r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    float a = (x-x1)*(x-x1);
    float b = (y-y1)*(y-y1);
    float dis = sqrt(a+b);
    float ans = ceil(dis/(2*r));
    cout<<ans<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*it is quite obvious that in one move we can change the centre of circle
from x,y to x1,y1 if the distance is less than 2*r
and we are to check the distance between them 
then ceil(distance/2*r) will be the answer the question can be
more clear if you make a diagram of it :)*/