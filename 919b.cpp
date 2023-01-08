#include <iostream>
using namespace std;
int arr[10000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int j = 0;
    for (int i = 19; i < 1e9; i++)
    {
        int num = i;
        int sum = 0;
        while (num)
        {
          sum+=num%10;
          num/=10;
        }
        if (sum==10)
        {
            j++;
            if (j==n)
            {
                cout<<i<<"\n";
                exit(0);
            }     
        }
    }
    return 0;
}
/*we are to find the nth number such that sum of it's digits 
is 10 so the best approach is to find the number i by using forloop
and check for every condition it's for single case(we don't need to check mulitple
nth number in a single case) that's why time will 
be managed :)*/