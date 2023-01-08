#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
 int a,b,c,d;
 int x,y,x1,y1,x2,y2;
 cin>>a>>b>>c>>d;
 cin>>x>>y>>x1>>y1>>x2>>y2;
 if (a-b>x-x1||b-a>x2-x){
     cout<<"NO\n";
     return;
 }
 if (c-d>y-y1||d-c>y2-y){
     cout<<"NO\n";
     return;
 }
 if (x2==x1&&a+b>0){
    cout<<"NO\n";
    return;
 }
 if (y2==y1&c+d>0){
     cout<<"NO\n";
     return;
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

/*the best approach is to move around the position x in oscillation 
such that only one position in the series of x (that is least)
is used till the minimum of left,right finishes then we are to check
the condition of if left is max then left - right should be less than
x-x1 and if right is max then right - left should be less than x2-x
and same case for up down positions but here we are to replace x with y
now if there is not even a single position to oscillate and we are to move in
that particular direction then also we cannot move and hence cout -1 :)*/