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
    for (int i = 0; i < n; i++)cin>>arr[i];
    sort(arr,arr+n);
    int ans = 0;
    int wait = 0;
    for (int i = 0; i < n; i++){
        if (arr[i]>=wait){
            ans++;
            wait+=arr[i];
        }
    }
    cout<<ans<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*it is pretty simple we are to check the condition arr[i]>=wait
where wait is the addition of the selected people from arr[0]->arr[i];
and if we find any arr[i]<wait then we are not to add that person to the
final array and thus will not be included in wait
and sorting is necessary for the max output :)*/