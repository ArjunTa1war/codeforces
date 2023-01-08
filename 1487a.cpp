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
        int n,check = 0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[0])
            {
               cout<<n-i<<"\n";
               check = 1;
               break;
            }   
        } 
        if (check == 0)
        {
            cout<<0<<"\n";
        }
    } 
    return 0;
}
/*all heroes except the one with least level can win the tournament
so we are to find the number of heroes in the tournament who have 
high level than the one having least level :)*/
