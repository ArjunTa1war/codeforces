#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<arr[1]-arr[0]<<" "<<arr[n-1]-arr[0]<<"\n";
    for (int i = 1; i < n-1; i++)
    {
       int a = arr[i]-arr[i-1];
       int b= arr[i+1]-arr[i];
       int c = arr[i]-arr[0];
       int d = arr[n-1]-arr[i];
       cout<<min(a,b)<<" "<<max(c,d)<<"\n";
    }
    if (n>=2)
    {
        cout<<arr[n-1]-arr[n-2]<<" "<<arr[n-1]-arr[0]<<"\n";
    }
    return 0;
}
/*we are just to check the max and min distance of each and every i to any other i
the minimum distance between them is either a[i-1]-a[i] or a[i+1]-a[i]
and the maximum distance is when we calculate the distance of lowest or max
point from i and the longest distance is taken as the maximum value
and the series is in ascending order it is given :)*/