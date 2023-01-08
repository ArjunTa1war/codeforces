#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    cout<<min(min(a,b),(a+b)/4)<<"\n";
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
/*so it is quite obvious answer for it as the total number of teams
with 4 members each will always be min of min(a,b) and a+b/4
such that each teams contains atleast one of both teams it can
be obseved from paper pen too :)*/