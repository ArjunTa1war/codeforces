#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
 int n;
 cin>>n;
 for (int i = 1; i <= n; i++)cout<<i+1<<" ";
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
/*quite simple from 2 to n+1 there will be no occurence such that
a[i] is divisible by a[i-1] :)*/