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
 int arr[n+1];
 int cnt[51]={0};
 for (int i = 1; i <= n; i++){
     cin>>arr[i];
     if (arr[i]>n) while (arr[i]>n) arr[i]/=2;
     cnt[arr[i]]++;
 }
 for (int i = n; i >=1; i--){
   if (cnt[i]==0){
       cout<<"NO\n";
       return;
   }
   if (cnt[i]>1) cnt[i/2]+=cnt[i]-1;
 }
 cout<<"YES\n";
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
/*we are  just to check can we make array to permutation of 1 to n
that is every number of array is distinct and from 1 to n
so first we are to convert every number greater than n less than n
by dividing by 2 only
then we are to further divide and check :)*/