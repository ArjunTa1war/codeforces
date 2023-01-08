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
        long long a,b,k;
        cin>>a>>b>>k;
        long long ans = 0 ;
        ans = a*((k+1)/2);
        ans -=b*(k/2);
        cout<<ans<<"\n";
    }
    return 0;
}
/* at 1st jump frog will jump a to the right
at 2nd jump frog will jump b to the left this series
will go on for eg 
for k = 5;
for 3 times frog will jump right and for the 2 times frog will
jump left :)*/