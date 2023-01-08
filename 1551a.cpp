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
        int x = n%3;
        if (x==0)
        {
            cout<<(n/3)<<" "<<(n/3)<<"\n";
        }
        else if(x==1)
        {
            cout<<(n/3)+1<<" "<<(n/3)<<"\n";
        }
        else
        {
            cout<<(n/3)<<" "<<(n/3)+1<<"\n";
        }
    }
    return 0;
}
/*explainaion
polycarp can pay only 2 or 1 coins so and the difference between
number of 2s and 1's coins must be minimum as possible so if the
payment can be divided by 3 properly than we can use n/3 (2rs cois)
and same number of 1rs coins
but if the remainder is 1 then the number is odd then add 1 more coin
to n/3 of 1rs and if the remainder in 2 then add 2rs coin;
becuase untill the number is divided by 3 then we can add 2 and 1
and in this way we can get the difference between the number of coins
as minimum as posssible :)*/