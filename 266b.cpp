#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    char str[n + 1];
    cin >> str;
    getchar();
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        if (str[i]=='B')
        {
            arr[i] = 1;
        }
        else
        {
            arr[i]=0;
        }
    }
    while (x--)
    {
        for (int i = 0; i < n-1 ; i++)
        {
           if (arr[i]==1&&arr[i+1]==0)
           {
               int temp  = arr[i];
               arr[i] = arr[i+1];
               arr[i+1] = temp;
               i++;
           }
           
        }
    }
   for (int i = 0; i < n; i++)
   {
       if (arr[i] == 1)
       {
           str[i] = 'B';
       }
       else
       {
           str[i] = 'G';
       }
   }
   cout<<str;
   
    return 0;
}