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
  int nc = n;
  if (n%2==0){
    cout<<0<<"\n";
    return;
  }
  int even = 0;
  int count=0;
  while (n)
  {
     if (n%2==0)even++;
     n/=10;
     count++;
  }
  if (even==0){
      cout<<-1<<"\n";
      return;
  }
 int last = nc/pow(10,count-1);
 if (last%2==0)cout<<1<<"\n";
 else cout<<2<<"\n";
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
/*this question is about finding atleast one even number and take it to the last
so that it can be even number now 
if we the number is even then 0 moves
if there is no even number then impossible
if the number at the first is even then we can
reverse the number to make it even
or else we need to reverse twice for eg
1 2 3 3 5
so first 1 2 is reversed to 2 1 to make 2 1 3 3 5 then we reverse the whole number
to make it 53312 and thus number becomes even :)*/