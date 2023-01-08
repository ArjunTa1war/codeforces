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
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = n-1; i >=0; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
/*we are just to reverse the array as if we reverse there will be atleast 1 arr[i] != arr[i']
and this is the required condition and we need same sum also and reversing the array fulfills that
case also :)*/