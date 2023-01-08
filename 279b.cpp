#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    int ans = 0;
    int arr[n];
    for (int i = 0; i < n; i++)cin>>arr[i];
    int j = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {   
        while (sum+arr[j]<=t&&j<n)
        {
            sum+=arr[j];
            j++;
        }
        ans = max(ans,j-i);
        sum-=arr[i];
    }
    cout<<ans<<"\n";
    return 0;
}
/*the question is simple but it need optimized answer
we are to find a continous series of array such that the sum
of that series is not more than t and the number of elements are 
maximum as possible so we can run a while loop till sum+arr[j]<=t&&
j<n then when this loop stops we are to subtract first element of that 
series that is arr[i] and again use the loop it is done to optimize the 
code :)*/