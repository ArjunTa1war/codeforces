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
    int arr[2001] = {0};
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        if (arr[a+b]==0)
        {
            arr[a+b]++;
        }else  ans=0;
    }
    
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