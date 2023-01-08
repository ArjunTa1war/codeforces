#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,sum = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    } 
    sort(arr,arr+n);
    for (int i = 0; i < n-1; i++)
    {
        sum +=arr[n-1] - arr[i];
    }
    cout<<sum;
    return 0;
}