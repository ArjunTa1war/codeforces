#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n],ans=0;
    for (int i = 0; i < n; i++) cin>>arr[i];
    sort(arr,arr+n);
    for (int i = 0; i < n-1; i+=2)
    {
        ans+=arr[i+1]-arr[i];
    }
    cout<<ans<<"\n";
    return 0;
}
/*logic is simple we are take the pair of two such that these two are same
otherwise we can increase the smaller number so this is the best approach :)*/