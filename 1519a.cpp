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
        long long r,b,d;
        cin>>r>>b>>d;
        long long m = min(r,b);
        if (abs(r-b)<= m*d)
        {
          cout<<"YES\n";
        }else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
/*we can make min(r,b) packets
in this these packets the total difference between
the a and b can be atmost m*d so if the condition is true then 
print yes otherwise no because if the number are 6 and 3 then 
we can make three packets where we can keep it in the form of 1 and 2
and thus the d becomes least :)*/
