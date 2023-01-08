#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,l;
    cin>>n>>l;
   double arr[n];
   double max [n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n-1; i++)
    {
        max[i] = arr[i+1] - arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {    if (max[0]<max[i])
        {
            double temp = max[0];
            max[0] = max[i];
            max[i] = temp;
        }  
    } 
    max[0] = max[0]*0.5;
     int x = arr[0]-0; 
     int y = l - arr[n-1];
    if (arr[0]>0)
    {     
        if (x>max[0])
        {
            max[0] = x;
        }   
    }
    if (arr[n-1]<l)
    {
      
        if (y>max[0])
        {
            max[0] = y;
        }     
    }
   printf("%f",max[0]);
    return 0;
}