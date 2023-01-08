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
        int n,ans=0,l,r;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==1)
            {
                l = i;
                break;
            }  
        }
        for (int i = n-1; i >=0; i--)
        {
            if (arr[i]==1)
            {
                r=i;
                break;
            }
        }
        for (int i = l; i <= r; i++)
        {
            if (arr[i]==0)
            {
                ans++;
            }   
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/*we are just to find the minimum index of 1 and max index of 1
 then we are to find the number of 0 between them that is the answer
 to the given problem :)*/