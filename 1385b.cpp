#include <iostream>
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
        int arr[2*n];
        int check[51] = {0};
        for (int i = 0; i < 2*n; i++)
        {
            cin>>arr[i];
            if (check[arr[i]]==0)
            {
               check[arr[i]]++;
               cout<<arr[i]<<" ";
            }
        }
     cout<<"\n";   
    }
    return 0;
}
/*we are to start from beginning and we are to print that number
which has not been used yet that is check[arr[i]]==0
as every number is unique in original array that's why we need to
take care that no number is repeated twice :)*/