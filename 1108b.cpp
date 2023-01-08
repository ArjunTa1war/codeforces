#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n],ans=0;
    for (int i = 0; i < n; i++)cin>>arr[i];
    sort(arr,arr+n);
    int ans2 = 0;
    for (int i = n-1; i >0; i--)
    {
        if (arr[i]==arr[i-1]) {
            ans2 = arr[i];
            break;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (arr[n-1]%arr[i]!=0){
            ans = arr[i];
            break;
        }
    }
    if (ans==0)cout<<arr[n-1]<<" "<<ans2<<"\n";
    else cout<<arr[n-1]<<" "<<ans<<"\n";
    return 0;
}
/*we are to take the maximum element in the array that will be our x
and delete all it's divisors from it not more then once then we are to check 
the maximum number among the rest of the array and that will be our y :)*/