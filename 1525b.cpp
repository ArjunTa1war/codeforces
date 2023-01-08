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
        int arr[n],check=0;
        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
            if (arr[i]!=i)check=1;
        }
        if (check==0)cout<<0<<"\n";
        else if (arr[1]==n&&arr[n]==1)cout<<3<<"\n";
        else if (arr[1]!=1&&arr[n]!=n)cout<<2<<"\n";
        else cout<<1<<"\n";
    }
    return 0;
}
/*this question is all about observation
now we cannot rearrange the whole array so we can take any subarray of
size less than n (it can be n-1 too)for eg
if the array is in ascending order then it's okay cout<<0;
if the array is like 5 2 3 4 1 then we need 3 steps as in first
step we can me it 2 5 3 4 1 then 2 1 3 4 5 then 1 2 3 4 5 
if the array is like 2 1 3 5 4 then we can make it
1 2 3 5 4 then 1 2 3 4 5 in 2 steps
in other cases we need only 1 step :)*/