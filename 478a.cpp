#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[5],sum=0;
    for (int i = 0; i < 5; i++)
    {
            cin>>arr[i];
            sum+=arr[i];
    }
    if (sum%5!=0||sum==0)
    {
        cout<<"-1";
    }else
    {
        cout<<sum/5<<"\n";
    }
    return 0;
}
/*we are to find the initial bet b and this is same for all the persons
so b*5 = total (as the numbers of coins remains unchanged )
if the condition satisfies then cout b but if the sum is not divisible
by 5 then no answer exists and thus cout -1 :)*/