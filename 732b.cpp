#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int arr[n],ans=0;
    for (int i = 0; i < n; i++)cin>>arr[i];
    for (int i = 1; i < n; i++)
    {
        int sum = arr[i]+arr[i-1];
        if (sum<k)
        {
            arr[i]+=(k-sum);
            ans+=(k-sum);
        } 
    }
    cout<<ans<<"\n";
    for (int i = 0; i < n; i++)cout<<arr[i]<<" ";
    return 0;
}
/*we are to take additional walks on every i+1 days
as in this way we can be future proof as we need a[i+1] in next step too
this is the best approach 
if the walks are sufficient then we need to check the other condition :)*/