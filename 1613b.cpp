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
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    sort(arr,arr+n);
    int total = n/2;
    for (int i = 1; i < n; i++)
    {   if (total==0)break;
        cout<<arr[i]<<" "<<arr[0]<<"\n";
        total--;   
    }
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
/*it is quite obvious that if we divide any big number by
smaller number it's remainder will always be less than the
smaller number and this is the approach we will take the
smallest number and make it the divisor of every number greater 
than it and in this way the remainder will always be less than
lowest number and hence our condition will be fulfilled :)*/