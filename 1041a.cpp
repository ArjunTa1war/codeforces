#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    sort(arr,arr+n);
    cout<<(arr[n-1]-arr[0])-n+1;
    return 0;
}
/*we are initially having the continuous series but after the heist
some keyboards are missing and it is obvious that we are to find the
minimum number of stolen keyboard and that will be the missing terms
in the series min(arr[i])......max(arr[i]) and this will be the answer :)*/