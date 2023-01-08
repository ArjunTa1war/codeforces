#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a=0,b=0,check = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)cin>>arr[i];
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            a = i;
            break;
        }
    }
    for (int i = n-1; i >0; i--)
    {
        if (arr[i-1]>arr[i])
        {
            b = i;
            break;
        }
    }
    int num = (b+1-a)/2;
    for (int i = 0; i < num; i++)
    {
        int temp = arr[a+i];
        arr[a+i] = arr[b-i];
        arr[b-i] = temp;
    }
    for (int i = 0; i < n-1; i++)
    {
       if (arr[i]>arr[i+1])
       {
           cout<<"no\n";
           return 0;
       }
    }  
    cout<<"yes\n"<<a+1<<" "<<b+1<<"\n";
    return 0;
}
/*question is simple except it's implementation first we are to find
the first index from the beginning when the array starts decreasing 
and then we are to find the first index from the end when the array
starts increasing then we get the two points a,b
we are to reverse the array from a to b 
then check for array that whether the array is in increasing order or not
if it is sorted then cout<<yes along with a,b otherwise cout<<no :)*/