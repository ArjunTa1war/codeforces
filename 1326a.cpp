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
        int n;
        cin>>n;
        if (n==1)cout<<-1<<"\n";
        else
        {   cout<<2;
            for (int i = 0; i < n-1; i++)
            {
                cout<<3;
            }
        }
        cout<<"\n";
    }
    return 0;
}
/*the number 233333.....is not divided by 2 not either by 3 and digit is greater
than 0 and 2 is not divided by 3 or vice versa
and this is all what we want :)*/