#include <iostream>
using namespace std;
int main()
{
    int long r, a1, a2,n;
   scanf("%lu%lu%lu%lu",&r,&a1,&a2,&n);
    int long arr[n + 2];
    int total = 0;
    for (int i = 0; i < n; i++)
    {
       scanf("%lu",&arr[i]);
    }
    int max =  std::max(a1,a2);
    int min =  std::min(a1,a2);

    for (int j = min + 1; j < max; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (j == arr[i])
            {
                total++;
            }
        }
    }
    printf("%d\n",total);
return 0;
}