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
   map<ll,vector<ll>>univ;
   vector<ll>u(n);
   for(auto &x : u)cin>>x;
   for (int i = 0; i < n; i++){
      ll strength;
      cin>>strength;
      univ[u[i]].pb(strength);
   }
   vector<ll>ans(n+1);
   for(auto &x : univ){
    sort(all(x.ss),greater<int>());
    ll sz = x.ss.size();
    vector<ll>sum(sz+1);
    for (int j = 1; j <= sz; j++){
        sum[j] = sum[j-1]+x.ss[j-1];
    }
    for (int i = 1; i <= sz; i++){
        for (int k = i; k <=sz; k+=i)
        {
           ans[i]+=sum[k]-sum[k-i];
        }
    }
   }
   for (int i = 1; i <=n; i++)cout<<ans[i]<<" ";
   cout<<"\n";
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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*first we are to make the list of universities and students strengths in it
like
univ1 - 4 6 2
univ2 - 2 6 2
univ3 - 6 2
now we are to consider one university at a time that is if 
if k = 1 then univ 1 total will be what and if k = 2 then univ1 total
will be what now 
ans[1] indicates the total number of teams strengths that is
strength for univ1+univ2+univ3 and so on that's all
now suppose the univ 1  = 5 4 3 2 1
now if k = 1 then five teams will be there  5,4,3,2,1 
now if k = 2 then two teams wil be there (5,4),(3,2) 
now if k = 3 then one team will be there (5,4,3)
for further value of k then team will be one and after that it
will be zero and we are to calculate this for all the teams :)*/