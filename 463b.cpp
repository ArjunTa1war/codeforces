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
    int arr[n];
    for (int i = 0; i < n; i++)cin>>arr[i];
    int money = 0,energy=0;
    money = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]<=arr[i-1]+energy)
        {
            energy = arr[i-1]+energy-arr[i];
        }
        else
        {
          money += arr[i]-(arr[i-1]+energy) ;
          energy = 0;
        }
    }
    cout<<money<<"\n";
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
/*question is simple we just need to do implementation 
so we are to keep on checking for arr[i-1]+energy should be greater
than arr[i] if it is not then we need to spend 
the arr[i] - (arr[i-1]+energy) money till the loop ends :)*/