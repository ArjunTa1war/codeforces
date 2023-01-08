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
        ll n,m,x;
        cin>>n>>m>>x;
        ll ans = ((x-1)%n);
        ll a = ans+1;
        ans = ans*m;
        ans += ((x-a)/n)+1;
        cout<<ans<<"\n";
    }
    return 0;
}
/*we are first to find the row where the number x can be found
each row is having m numbers as m are the number of columns and then we are to find
the positon of x in a row 
we know that in first row the remainder will be one in 2nd remainder will be two in last reminder
will be zero
now if we are to add the total number of digits before the column of the group so we will
add(x-1)%n*m to the ans
now a is the first letter of the row of x so here the difference between the element is 
(x-a)this will given us the difference between the x and the first number of that row
now column wise if we check we are to find it's positon we can divide it by n that is number
of rows as between two numbers there is a difference of n so we can find the total number
of terms till then and this is the answer :)*/
