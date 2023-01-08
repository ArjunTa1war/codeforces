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
   ll n;
   cin>>n;
   vector<ll>v(n);
   for(auto &x : v)cin>>x;
   map<ll,ll>cnt;
   cnt[4]=0,cnt[8]=0,cnt[15]=0,cnt[16]=0,cnt[23]=0,cnt[42]=0;
   ll ans = 0;
   for (int i = 0; i < n; i++){
       cnt[v[i]]++;
       for(auto it : cnt){
        if(it.ff>=v[i])break;
        if(it.ss<cnt[v[i]]){
            cnt[v[i]]--;
            ans++;
        }
       }
       ll num = 0;
       for(auto &it : cnt)if(it.ss>0)num++;
       if(num==6)for(auto &it : cnt)it.ss--;
    }
   for(auto &it : cnt)ans+=it.ss;
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
/*our main logic is keep on removing the elements if the number less than that
is occurence less than it and 2nd logic is check when the all numbers are there
and in this way we can find the answer and in the end we are to delete all the
numbers left in the count array :)*/