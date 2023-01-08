#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
    ll n,l,r;
    cin>>n>>l>>r;
    ll arr[n],ans=0;
    for (int i = 0; i < n; i++)cin>>arr[i];
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        ll first = l-arr[i];
        ll second = r-arr[i];
        ll *a = lower_bound(arr+i+1,arr+n,first);
        ll *b = upper_bound(arr+i+1,arr+n,second);
        ans+=b-a;
    }
    cout<<ans<<"\n";
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
/*we are just to find the lower bound and upper bound for the given
value of l-arr[i]&&r-arr[i]and in this way we can find the answer in
less time without tle :)*/



// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <cmath>
// #include <numeric>
// #define ll long long
// using namespace std;

// void solve()
// {
//     ll n,l,r;
//     cin>>n>>l>>r;
//     ll arr[n],ans=0;
//     for (ll i = 0; i < n; i++)cin>>arr[i];
//     sort(arr,arr+n);
//     int first = n-1,last= n-1;
//     int i = 0;
//     while (i<last)
//     {
//         first = max(i,first);
//         while (first>i&&arr[i]+arr[first]>=l)first--;
//         while (last>first&&arr[i]+arr[last]>r)last--;
//         ans+=last-first;
//     }
//     cout<<ans<<"\n";
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         solve();
//     }
//     return 0;
// }