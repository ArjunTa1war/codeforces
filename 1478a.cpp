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
       int n;
       cin>>n;
       int arr[n+1],cnt[101]={0};
       for (int i = 1; i <= n; i++)
       {
           cin>>arr[i];
           cnt[arr[i]]++;
       }
       int *x=max_element(cnt,cnt+101);
       cout<<*x<<"\n";
   }
    return 0;
}
/*we are just to find the total occurence of the number which is repeated for
the most number of times as the numbers which are numbered same cannot be
painted with same color as it is mentioned that 
for any color, numbers on balls will form a strictly increasing sequence :)*/