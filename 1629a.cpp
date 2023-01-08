#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;

void solve()
{
 int n,k;
 cin>>n>>k;
 vector<int>a(n),b(n);
 for (int i = 0; i < n; i++)cin>>a[i];
 for (int i = 0; i < n; i++)cin>>b[i];
 int arr[100] = {0};
 for (int i = 0; i < n; i++){
     for (int j = 0; j < n; j++){
         if (arr[j]==1)continue;
         if (a[j]<=k){
             k+=b[j];
             arr[j] = 1;
         }
     }
 }
 cout<<k<<"\n";
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
/*there are two arrays and we are to take the array one
in ascending order and keep on adding b[i] to the value of 
k to get the answer :)*/