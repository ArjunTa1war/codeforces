#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    long long arr[n+1];
    long long max[1000000] = {0};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int j = 1;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]<= arr[i+1])
        {
            max[j]++;
        }
        else
        {
            j++;
        }
        
    }
   sort(max,max+j+1);
   cout<<max[j]+1;
    return 0;
}