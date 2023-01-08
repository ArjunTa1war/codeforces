#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
 ll n;
 cin>>n;
 ll arr[n];
 for (ll i = 0; i < n; i++) cin>>arr[i];
 ll sum = 0,ans=0;
 for (ll i = 0; i < n; i++)
 {
     if (arr[i]>0){
         sum+=arr[i];
         arr[i] = 0;
     }
     else{
         if (sum>=abs(arr[i])){
            sum-=(abs(arr[i]));
            arr[i] = 0;
         }else{
             arr[i]+=sum;
             sum = 0;
         }
     }
     ans+=abs(arr[i]);
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
/*acc to question a positive number can delete the negative number
if it comes before the negative number that's why we are to keep on
finding the positive number before negative and keep on changing the
values by adding the positive to negative and making it zero
and in the end the number left will take coins to change
and that is the answer :)*/
