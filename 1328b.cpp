#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
   ll n,k;
   cin>>n>>k;
   ll sum=0,x=0;
   for (int i = 1; i <= n; i++)
   {
       sum+=i;
       if (sum>=k)
       {
           x =i;
           break;
       }
   }
   int a = n-x-1; 
   ll y = sum%k;
   int b = (n-x)+y;
   for (int i = 0; i < n; i++)
   {
       if (i==a||i==b)cout<<"b";
       else cout<<"a";
   }
   cout<<"\n";
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
/*it is totally based on observation 
we can just keep a as 1 and b as 2
and write n*(n-1)/2 numbers by using 2 b's and
all other a's now we can make a approach to
keep one b in different positions 
if b is in second last position there is 1 possibility
if b is in third last position there are 2 possibilities
if in 4th last position there are 3 possiblities
so the division is like 1 23 456 78910 1112131415 ans so on
we are to find where k value lies and then we can easily find
the position where the next b is to be placed :)*/