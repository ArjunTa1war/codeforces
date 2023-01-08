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
        int arr2[n];
        int j = 0;
        for (int i = 0; i < n; i+=2)
        {
          arr2[i] = arr[j];
          arr2[i+1] = arr[n-j-1];
          j++;
        }
        if (n%2!=0)arr[n-1] = arr[j];
        for (int i = n-1; i >= 0; i--)
        {
            cout<<arr2[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
/*we are just to write the array in the reverse form of
max,min,2nd last max,2nd last min,............
and after writing the inverse form of it we can easily
notice that in that case 
|a2-a1|<=|a3-a2|....and so on and this is asked in the question :)*/