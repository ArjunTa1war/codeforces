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
 ll sum=0;
 for (ll i = 0; i < n; i++){
     ll a;
     cin>>a;
     sum+=a;
 }
 if (sum%n==0){
     cout<<"0\n";
     return;
 }
 ll num = n-(sum%n);
 cout<<num*(sum%n)<<"\n";
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
/*we are just to make all the numbers of array same as possible
and if there is some remainder left then we are to adjust it in the
beginning or in the way that the remainder is equally distributed
for eg
if the array is
5 5 5 5 5 5 5 5 5 12 then we can write it in the form of
6 6 6 6 6 6 6 5 5 5 in any way we write answer would be same
it would be
(0+0+0+0+0+0+1+1+1)+(0+0+0+0+0+1+1+1)
3+3+3+3......7times
and answer becomes 21 :)*/