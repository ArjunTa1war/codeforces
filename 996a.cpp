#include <iostream>
using namespace std;

int main(){
    int arr[5] = {100,20,10,5,1};
    int n,ans =0;
    cin>>n;
    int i = 0;
    while (n)
    {
        ans+=n/arr[i];
        n = n%arr[i];
        i++;
    }
    cout<<ans;
    return 0;
}