#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#define ll long long
using namespace std;

void solve()
{
 int n;
 cin>>n; 
 double ans=0.0;
 for (double i = 1; i <= n; i++)
 {
     ans+=1.0/i;
 }
 cout<<fixed<<setprecision(8)<<ans<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*well it is quite obvious that the answer will be
1/1 + 1/2+ 1/3+ 1/4...........1/n and that's all :)*/