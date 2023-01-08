#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int arr [11]; 
        int j = 0;
        for (int i = 1; i <= 10; i++)
        {   
            int x = pow(10, i);
            if (a % x != 0)
             {
               arr[j] = a%x;
               j++;
            } 
            a = (a / x) * x;
        }
        cout<<j<<"\n";
        for (int i = 0; i < j-1; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<arr[j-1]<<"\n";
    }
    return 0;
}