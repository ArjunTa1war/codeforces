#include <iostream>
#include <cmath>
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
        ll n,x;
        cin>>n>>x;
        ll m_in = 0,m_ax=0,sum=0;
        for (int i = 0; i < n; i++)
        {
         ll a;
         cin>>a;
         m_ax += ceil((double)a/x);
         sum+=a;
        }
        m_in = ceil((double)sum/x);
        cout<<m_in<<" "<<m_ax<<"\n";
    }
    return 0;
}
/*logic is simple as greatest integer
(a+b)/x <=a/x+b/x and this is the main reason that min
is the sum of all the numbers and max is individual sum of 
all the numbers :)*/