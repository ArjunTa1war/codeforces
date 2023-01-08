#include <iostream>
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
        ll n, ans = 0;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++) cin >> arr[i]; 
        for (ll i = 0; i < n;)
        {   ll maxi = arr[i];
            while (i<n&&arr[i]>0)
            {
               maxi = max(maxi,arr[i]);
               i++;
            }
            if (maxi>0) ans+=maxi;
            if (i<n)maxi = arr[i];
            while (i<n&&arr[i]<0)
            {
                maxi = max(maxi,arr[i]);
                i++;
            }
            if (maxi<0)ans+=maxi;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/*the question is simple but it's implementation is the main thing so we are to take
blocks of positive numbers and negative numbers 
eg = 1 2 3 -1 -2 3 4 -4 -2 ...
so here we will check for 1,2,3 first 
then we will check for    -1,-2
then we will check for    3,4
then we will check for   -4,-2........
and we are to check for max digit in every block then add it to
the answer :)*/