#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
  int n,m,rc,cc,rb,cb,a1,a2;
  cin>>n>>m>>rc>>cc>>rb>>cb;
  if (rc<=rb)a1 = rb-rc;
  else a1 = (rc - rb)+(2*(n-rc));
  if (cc<=cb)a2 = cb-cc;
  else a2 = (cc - cb) +(2*(m-cc));
  cout<<min(a1,a2)<<"\n";
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
/*we are just to check for both row and column
and we are to choose the minimum one :)*/