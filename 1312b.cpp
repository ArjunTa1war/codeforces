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
        for (int i = 0; i < n; i++)cin>>arr[i];
        sort(arr,arr+n);
        for (int i = n-1; i >=0 ; i--)cout<<arr[i]<<" ";
        cout<<"\n";
    } 
    return 0;
}
/*if the array is in descending order then the condition 
will be arr[0]-1 can never equal to arr[1]-2 and same for all
the other numbers in array :)*/