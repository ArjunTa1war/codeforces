#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    for (int i = 0; i < n; i++)
    {   int count = 0;
        int a,b,j=0;
        cin>>a>>b;
        int d = abs(a-b);
        while (d)
        {
           count+=d/arr[j];
           d = d%arr[j];
           j++;
        }
         cout<<count<<endl;
    }
    
    return 0;
}