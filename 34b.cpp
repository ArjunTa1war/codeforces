#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,ans=0;
    cin>>n>>m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
   for (int i = 0; i < m; i++)
   {
      if (arr[i]>=0)
      {
          break;
      }
      ans= ans+abs(arr[i]);
   }
   cout<<ans;
    return 0;
}
/*we can take maximum of m tvs and we are just to take lowest terms less then
0 as it is the only way bob can earn money so we are to find the max
amount earned by bob :)*/