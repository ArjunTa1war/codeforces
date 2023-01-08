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
       int n,m;
       cin>>n>>m;
       int ans = 0;
       for (int i = 1; i <= n; i++)
       {
        for (int j = 1; j <= m; j++)
        {
           char a;
           cin>>a;
           if (i==n)
           {
                if (a=='D') ans++;
           }
           if (j==m)
           {
               if (a=='R') ans++;
           } 
        }
       }
       cout<<ans<<"\n";
   }
    return 0;
}
/*as it is given that if we add any luggage to any position it should reach the
counter now we can easily notice that the luggage can move either y+1 or x+1
means every luggage will reach to eiher in the mth column or the nth row
in mth column we need to make every element d and in nth row we need to make every
element r in this way any luggage at any position can reach to counter
or we can say that last row should have r in it's positions and last
column should have d in it's positions :)*/