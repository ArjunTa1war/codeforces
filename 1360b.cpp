#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n,minimum,ans;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
      sort(arr,arr+n);   
      ans = arr[1] -arr[0];    
      for (int i = 0; i < n-1; i++)
      {
        int m =  arr[i+1] - arr[i];
        ans =  min (ans,m);
      }
      cout<<ans<<"\n";
       
    }
    return 0;
}
/*explaination
in this we are given an array and we are to just find the
two numbers with the least difference and that difference will
be the answer :)*/