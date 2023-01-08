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
        if (n%m==0)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}
/* the number of vertices is equal to number of sides 
and we are to check whether the the polygon having m vertices can have the same centre
as the polygon having n vertices is having.
so if the n is perfectly divisible by m then only we can have same centre as 
in other cases the polygon is not possible or the centre will not be same :)*/
