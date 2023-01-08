#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
  int a,b,c;
  cin>>a>>b>>c;
  if (a+b==c||b+c==a||a+c==b)cout<<"YES\n";
  else if ((a==b&&c%2==0)||(b==c&&a%2==0)||(a==c&&b%2==0))cout<<"YES\n";
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
/*there are only two conditions that we can make a triangle from
the given lengths and these are shown :)*/