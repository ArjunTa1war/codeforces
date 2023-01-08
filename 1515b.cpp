#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

int perfectsquare(int n){
   if (n==0)return 0;
   int a = sqrt(n);
   if (a*a==n)return 1;
   return 0;
}
void solve()
{
 int n;
 cin>>n;
  if (n%2!=0){
      cout<<"NO\n";
      return;
  }
    int a=0,b=0;
    a = n/2;
    if (n%4==0)b=n/4;
    if (perfectsquare(a)||perfectsquare(b))cout<<"YES\n";
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
/*it is simple we are just to check that 
  the number should be in the form of 2x or 4x
  where x has a perfect square and that's all 
  we are just to check it :)*/