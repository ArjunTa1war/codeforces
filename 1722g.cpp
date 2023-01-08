#ifdef LOCAL
#include "arjun.hpp"
#else
#include <bits/stdc++.h>
using namespace std;
#define dbg(...)
#endif
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)

void solve(){
   int n;
   cin>>n;
   int req = n%4;
   n-=n%4;
   if(req==2)n--;
   for (int i = 4; i <= n+3; i++)cout<<i<<" ";
   if(req==1)cout<<"0";
   else if(req==2)cout<<(1<<30)+(n+4)<<" "<<(1<<30)<<" "<<0;
   else if(req==3)cout<<"1 2 3";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
/*it is quite simple we are just to observe one thing that is 
if we take the xor from starting to the end of the digits it wil be like
0 x x 0 x x x 0 x x x 0 that is at every 4th place there is a zero and thus
we can write in the form of 4n if it is having n%4==1 then we can add extra 0
if n%4==2 then 
4 5 6 7 gives out zero what if we replace 7 with three digits it will be
anything 
if(n%4==3)then we can write 1 2 3 as xor of 1^2^3 = 0 and thus this is
the solution :)*/