#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        ll a,b,count=0;
        cin>>a>>b;
        ll m_in = min(a,b);
        ll m_ax = max(a,b);
        while (1)
        {
            if (m_in>=m_ax)
            {
                break;
            }
            m_in*=2;
            count++;
        }
       if (m_in!=m_ax)cout<<-1<<"\n";
       else
       {
         ll ans = count/3;
         if(count%3!=0)ans++;
         cout<<ans<<"\n";
       }
    }
    return 0;
}
/*logic is simple we can either divide or multiply by 2,4,8
and this is in the form of 2^1,2^2 .....so if we cannot form 
numbers in the form of m_ax = min(2)^n then we cannot convert the 
given number
and we are to keep the number of operation as low as possible so
we will multiply the given number by 8 as 2^3 = 8 
till it's possible other wise we will use either 4 or 2
that is ans++ we don't need to use 4 and 2 together instead it we can 
use 8 :)*/