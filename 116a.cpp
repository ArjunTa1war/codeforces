#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1],b[n+1];
    int max[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i];
    }
    max[0] = b[0];
    for (int i = 0; i < n-1; i++)
    {
        b[i+1] = b[i]-a[i+1]+b[i+1];
        max[i+1] = b[i+1];
    }
    sort(max,max+n);
    cout<<max[n-1];
    
    return 0;
}