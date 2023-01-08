#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        float arr[a+1];
        float sum = 0;
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+a);
        for (int i = 0; i < a-1; i++)
        {
         sum = sum+ arr[i];
        }
        printf("%f\n",(sum/(a-1))+arr[a-1]);
    }
    return 0;
}