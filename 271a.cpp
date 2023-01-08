#include <iostream>
#include <algorithm>
using namespace std;
int differ(int *arr){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0;j < 4; j++)
        {
            if (i != j)
            {
            if (arr[i]==arr[j])
            {
                return 0;
            }
            }  
            
        }
    }
    return 1;
}
int main(){
  int n;
  cin>>n;
  int arr[5];
  for (int i = n+1; i < 10000; i++)
  {    int j = 0;
        int ans = i;
         while (ans)
         {
             arr[j] = ans%10;
             ans = ans/10;
             j++;
         }
         if (differ(arr))
         {
             cout<<i<<endl;
             break;
         }    
  }
    return 0;
}