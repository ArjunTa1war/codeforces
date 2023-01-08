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
        int x1,y1,z1,x2,y2,z2;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        int ans = min(z1,y2);
        z1 = z1-ans;
        y2 = y2 - ans;
        ans*=2;
        int a = y2+x2;
        if (a>=y1) cout<<ans<<"\n";
        else cout<<ans - 2*(y1 - a)<<"\n";
    }
    return 0;
}
/*this question evolves around 
just a and only for number of 1 and 2's
it's known to us 2*1 = 2 or 2*0 & 2*2 = 0
and 1*1 & 1*0 = 0 or 1*2 = -2
and on every other case it's not gonna effect the solution
as the difference made by them will be zero so we are just
 to count the number of 2*1 and (min number of 1*2) :)*/