#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<b<<" "<<c<<" "<<c<<"\n";
    }
    return 0;
}
/*the property of triangle is the sum of two sides of triangle must be greater then the
third side that's why we will the the 1st side as max as possible and take the 2nd side as max as 
possible but if take third side same as c it will become the triangle with sides b,c,c and c is 
greater then b therefore the condition becomes true :)*/