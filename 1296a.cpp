#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i = 0; i < n ; i++)
    {
        int a,sum=0,even=0,odd=0;
        cin>>a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if (arr[i]%2==0) even++;
            else odd++;     
        }
        if (sum%2==1)
        {
             cout<<"YES\n";
        }
        else
        {
             if (even>0&&odd>0)
             {
                 cout<<"YES\n";
             }
             else
             {
                 cout<<"NO\n";
             }   
        }
    }
    return 0;
}
/*if the sum of the members of array is odd then fine if not then we can make them odd by
adding 1 odd to any even thats why we need to check this if this is possible cout yes other wise
no :)*/