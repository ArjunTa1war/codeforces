#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,f;
    cin>>n>>f;
    int arr[f+1];
    int count[f+1];
    for (int i = 0; i < f; i++)
    {
        cin>>arr[i];
    }
    int x = n-1;
  sort(arr,arr+f);
  for (int i = 0; i < f-x; i++)
  {
     count[i] = arr[i+x] -arr[i];
  }
  sort(count,count+f-x);
  cout<<count[0];
    return 0;
}