#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n],left[n],l=0,right[n],r=0;
    int nc = n;
    for (int i = 0; i < n; i++) cin>>arr[i];
    int maxi=*max_element(arr,arr+n);
    if (arr[0]!=maxi&&arr[n-1]!=maxi)
    {
        cout<<-1<<"\n";
        return;
    }
    if (arr[0]==maxi)
    {
       cout<<arr[0]<<" ";
       for (int i = n-1; i >0 ; i--)cout<<arr[i]<<" ";
    }else
    {
        for (int i = n-2; i >=0; i--)cout<<arr[i]<<" ";
        cout<<arr[n-1]<<" ";
    }
    cout<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*it totally depends on observation like the max element should be either
at fist position or last position if it is one first then we can 
write it first and then reversing other digits 
if it is the last postion we first reverse the array then write the
last number for eg
1 2 3 4
3 2 1 4 will give the same result after the operations in the question
and this will be valid for all numbers :)*/