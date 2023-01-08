#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        sum+=a;
        cout<<sum<<" ";
        if (a<0)
        {
            sum=sum-a;
        }
    }
    return 0;
}
/*now we are given that ai-xi = bi where the x is max(0,a1,,,,ax-1)
and b is given now for finding a we need bi+xi now x is the max
and it is always increasing
now the x is starting from 0 
so the a1 will be b1+0;
now x became b1
and a2 will become b1+b2
now x became b1+b2;
this series will go on but if the number is negative then x will not change
as x is increasing and if bi is negative then there is no effect on x,
x will remain unchanged :)*/