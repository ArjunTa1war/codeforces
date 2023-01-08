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
  int a = *max_element(arr,arr+n);
  int b = *min_element(arr,arr+n);
  cout<<a-b<<"\n";
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
/*we are just to find the max and min number if we make
the min number max number then acc to question it is quite obvious
that other numbers can become max by itself and hence all will be same :)*/