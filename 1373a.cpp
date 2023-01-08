#include <iostream>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
       ll a, b, c;
        cin >> a >> b >> c;
        if (a < c)
        {
            cout << 1 << " ";
            if (c<a*b) cout << b;
            else  cout << -1;
        }else
        {
            cout<<-1<<" ";
            if (c<a*b)cout<<b;
            else cout<<-1;
        }
        cout<<"\n";   
    }
    return 0;
}
/*we are to check the conditions here that is if we can buy atleast one donut
from shop a at less amount than the whole bulk that we are getting at shop b 
then we can print 1 here as value of x can be anything 
now we need to check if we buy the whole bulk then the price will be c
now if we need to buy b donut at price a then the price will be a*b
if c is less than the price a*b then we can buy b donuts from shop b such that it
we will be on cheaper side here :)*/