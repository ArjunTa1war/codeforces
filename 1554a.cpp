#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
       ll n;
       cin>>n;
       ll arr[n];
      for (int i = 0; i < n; i++)
      {
          cin>>arr[i];
      }
      ll ans = 0;
      for (int i = 0; i < n-1; i++)
      {
          ll x = arr[i]*arr[i+1];
          ans = max(ans,x);
      }
      cout<<ans<<"\n";
    }
    return 0;
}
/*we are take the multplication of each and every two consecutive digits
as we are to do max(l,r).min(l,r)=max as possible
now if we take more than one digit max will be max no doubt
but min can decrease as either it can be same as before or can reduce
it's just an observation
and in the end we are write the max possible(arr[i]*arr[i+1]) :)*/ 