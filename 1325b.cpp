#include <iostream>
#include <algorithm>
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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int ans = n;
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] == arr[i+1])
            {
                ans--;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/*we are just to find the number of distinct elements in an array
as we are to find an array with strictly greater value :)*/