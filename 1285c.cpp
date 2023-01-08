#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

ll gcd(ll a,ll b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

void solve()
{
   ll x;
   cin>>x;
   for (ll i = sqrt(x); i >=1; i--){
     if(x%i==0){
        ll num = x/i;
        ll g = gcd(i,num);
        if(g!=1)continue;
        cout<<i<<" "<<num<<"\n";
        return;
     }
   }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*lcm is lowest common multiple of a and b now we are to 
choose a and b such that the max is minimum among them
now max(a,b)cannot be greater than lcm itself as 1,lcm is
also the answer
lcm = a*b/gcd(a,b) now we are just to calculate such that
max(a,b) =  least as possible 
lcm = a*b/gcd(a,b) now we can know about all the multiples
of lcm it will be below sqrt(lcm)
out of a and b atleast one should be below sqrt(x) 
and one above sqrt(x) and if gcd(a,b)!=1 then a*b
is not x :)*/