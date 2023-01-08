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
  int l[n],r[n],ans[n];
  int check[1002][1002]={0};
  for (int i = 0; i < n; i++){
      cin>>l[i]>>r[i];
      check[l[i]][r[i]]=1;
  }
   for (int i = 0; i < n; i++)
   {
       for (int j = l[i]; j <= r[i]; j++){
           if ((check[l[i]][j-1]==1||j==l[i])&&(check[j+1][r[i]]==1||j==r[i]))ans[i]=j;
       }
   }
   for (int i = 0; i < n; i++) cout<<l[i]<<" "<<r[i]<<" "<<ans[i]<<"\n";
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
/*if we are give l[i] & r[i] then we are to find that d
such that (l[i],d-1) and (d+1,r[i]) is present
or (l[i],l[i])  or (r[i],r[i]) is present then we can write 
that given d as our answer :)*/