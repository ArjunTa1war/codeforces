#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;
 
void solve()
{ 
    ll n,l,r,k,j=0;
    cin>>n>>l>>r>>k;
    int best[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
       if (a>=l&&a<=r)
       {
           best[j] = a;
           j++;
       }
    }
    int sum=0,ans=0;
    sort(best,best+j);
 
    for (int i = 0; i < j; i++)
    {
        if (sum+best[i]<=k)
        {
            ans++;
            sum+=best[i];
        }else
        {
            break;
        }
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
/*we are to make an array of chocolates whose price is greater than equal to l
and less than or equal to r
and then we are to sort the array and check the max number of chocolates we can buy
with money k and that will be the answer :)*/