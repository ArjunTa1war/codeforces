#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int l= s.length();
    int one = 0,zero=0;
    for (int i = 0; i < l; i++)
    {
        if (s[i]=='0')zero++;
        else one++;
    }
    int ans = min(zero,one);
    int p1=0,p0=0;
    for (int i = 0; i < l; i++)
    {
        if (s[i]=='1')one--,p1++;
        else zero--,p0++;
        ans=min(ans,zero+p1);
        ans=min(ans,one+p0);
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