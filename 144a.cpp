#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = arr[0];
    int p1 = 0,p2 = 0;
    for (int i = 1; i < n; i++)
    {    if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
            p1 =i;
        }
    }
    arr[0] = x;
    for (int i = 0; i < n; i++)
    {
        if (arr[0]>=arr[i])
        {
            arr[0] = arr[i];
            p2 = i;
        }
    }
   p2 = n -p2-1;
   if (p1+p2 >= n)
   {
       cout<<p1+p2-1;
   }
   else
   {
       cout<<p1+p2;
   }
    return 0;
}