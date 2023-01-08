#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, d;
        cin >> n >> d;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        } 
        sort(arr,arr+n);
        if (arr[0]+arr[1]<=d||arr[n-1]<=d)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        }
    return 0;
}
/*we can change any largest digit with the two minimum numbers
so we are to check whether the two minimum numbers are less then
d when added or not 2 nd condition is if the maximum element of the
array is equal to or less than d then also the condition is possible
that all element of array should be less then or equal to d :)*/