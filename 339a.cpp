#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main(){
    char s[101];
    cin>>s;
    int arr[100] = {0};
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    { 
        arr[i] = s[i]-48;
        if (arr[i]<0)
        {
            arr[i] = 100;
        }
    }
    sort(arr,arr+l);
   for (int i = 0; i < (l+1)/2; i++)
   {    if ( i < (l+1)/2-1)
   {
     cout<<arr[i]<<"+";
   }
   else
   {
       cout<<arr[i];
   }
   }
   
    return 0;
}