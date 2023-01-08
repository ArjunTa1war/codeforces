#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

void solve()
{
   ll n;
   cin>>n;
   vector<ll>v(n);
   for(auto &it : v)cin>>it;
   ll num = v[0],ans=0;
   for (int i = 1; i < n; i++)num = gcd(num,v[i]);;
   for (int i = 1; i < sqrt(num); i++)if(num%i==0)ans+=2;
   if(pow(sqrt(num),2)==num)ans++;
   cout<<ans<<"\n";
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
/*this question is quite simple we are just to find the gcd
of all the numbers and then find the total number of divisors
of calculated gcd :)*/