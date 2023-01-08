#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

void solve()
{
   ll n,sum=0;
   cin>>n;
   vector<ll>v(n);
   for(auto &x : v)cin>>x,sum+=x;
   ll maxi = *max_element(all(v));
   if(2*maxi>sum||sum&1)return void(cout<<"NO\n");
   cout<<"YES\n";
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
/*this question is totally basic if the sum is odd then we can not reduce
2 each time to make it 0 so the sum should be even
and if the maximum element is greater than the rest of the numbers that
is maximum element is more than the half of the array sum then also we cannot
solve it as even if we use all rest element and 1 is reduced each time from the
max then also some number will be there in the max :)*/