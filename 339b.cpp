#include <iostream>
using namespace std;

int main(){
    long long int a,b;
    cin>>a>>b;
    long long int ans = 0;
    long long int arr[b+1];
    arr[0] = 1;
    for (long long int i = 1; i <= b; i++)
    {
        cin>>arr[i];
    }
    for (long long int i = 0; i < b; i++)
    {
        if (arr[i+1]>arr[i])
        {
            ans = ans+(arr[i+1] - arr[i]);
        }
       else if (arr[i+1]<arr[i])
        {
            ans = ans+(a-arr[i])+arr[i+1];
        }   
        
    }
    cout<<ans<<"\n";

    return 0;
}