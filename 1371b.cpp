#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
    ll n,r;
    cin>>n>>r;
    ll rem = 0;
    if (r<=1){
        cout<<"1\n";
        return; 
    }
    if (n<=r){
        r=n-1;
        rem = 1;
    }
  ll ans = rem+(r*(r+1)/2);
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
/*answer totally depends on the value of r
so acc to question we are to find the total no. of 
different patterns such that each box is connected to
other box by one side
let 0 be the empty space and 1 be the filled shape
now the if the n is 4 and let r be 4 we will take
r no more than n-1 for convenience 
if r>=n then a straight line of boxes can be made that's
why keep that value in rem
now boxes can be filled like if r=3
1 1 1  then 0 1 1 then 0 0 1  
1 0 0       1 1 0      1 1 1
then we will take r = 2 
1 1    then   0 1  then we will take r = 1 so we can notice that
1 1           1 1
              1 0 
number of possible shapes are r for each value of r
so the total number of shapes will be sum(r) that is r(r+1)/2 :)*/