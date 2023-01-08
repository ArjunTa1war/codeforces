#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,sum=0;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
   for (int i = 0; i < n; i++)
   {
       if (arr[i] <=5-k)
       {
           sum++;
       }     
   }
   cout<<sum/3;
    return 0;
}

/*there are n studnet and they can participate atmost 5 times so the required 
number should be less than 5 but here is the condition that they also need to 
play for k times therefore they should have no more matched than 5-k
for eg if the k is 1 then all should have mathes less than equal to 4;
for eg if the k is 2 then all should have mathes less than equal to 3; and thus it goes on*/