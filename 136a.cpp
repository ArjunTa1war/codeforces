#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    int inv[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
 
            if (arr[j] == i + 1)
            {
                inv[i] = j + 1;
 
                break;
            }
        }
    }
   for (int i = 0; i < n; i++)
   {
       cout<<inv[i]<<" ";
   }
   
    return 0;
}