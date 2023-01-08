#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    float arr[n+1];
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        arr[i] = arr[i]/100;
        sum+=arr[i];
    }
    printf("%0.5f",(sum*100)/(n));
    
    return 0;
}