#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iterator>
#include <vector>
#define ll long long
using namespace std;

void solve()
{
  int size;
  cin>>size;  
  vector<int>v;
  for (int i = 0; i < size; i++)
  {
      int a;
      cin>>a;
      v.push_back(a);
  }
  int ans, n = size-1;
  sort(v.begin(),v.end());
  for (int i = 0; i < size; i++){
    if (v.at(i)>0){
      n = i;
      break;
    }
}
 ans = n+1;
 size = n;
 for (int i = 0; i < size; i++){
   if (v.at(i+1)-v.at(i)<v.at(n)){
     cout<<ans-1<<"\n";
     return;
   }
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
/*question is simple it is quite obvious that there can only be
one positive number and we are to check whether we can use it or not
and now if we talk about negative numbers then if all numbers are negative
then it is quite obvious that the difference between them is positive
greater than the max among them as all are negative
so we are to check the difference between each number of negative
if any is less than the positive number cout ans-1 otherwise ans :)*/