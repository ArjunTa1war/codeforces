#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
 int l,r,k;
 cin>>l>>r>>k;
 int odd = (r-l)/2;
 if (l%2==1||r%2==1)odd++;
 if (l==r&&l>1) cout<<"YES\n";
 else if (odd<=k)cout<<"YES\n";
 else cout<<"NO\n";
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
/*it is quite obvious that the k should be the total number
of odd numbers between l and r as
if there is any odd number left in the series then
it is quite obvious that the gcd can never be greater than 1 :)*/