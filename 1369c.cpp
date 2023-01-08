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
   ll n,k,single = 0;
   cin>>n>>k;
   vector<ll>v(n),w(k),d;
   for(auto &it : v)cin>>it;
   for(auto &it : w){
    cin>>it;
    if(it==1)single++;
    else d.pb(it-1);
   }
   sort(v.begin(),v.end(),greater<int>());
   ll ans = (accumulate(v.begin(),v.begin()+single,0ll));
   ans*=2;
   ans=accumulate(v.begin()+single,v.begin()+k,ans);
   sort(all(v));
   sort(all(d),greater<int>());
   int j = 0,i=0;
     while (j<d.size()){
       ans+=v[i];
       i+=d[j];
       j++;
     }
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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*this is quite simple here we are just to count the number of friends
which will be given one gift and assign them as the max values and 
this will count for total of 2*max and then give all other left values
to the other friends now it comes the turn of distributing the minimum
terms now a person will take all the minimum values so that for others
minimum value is little bit increased and thus this is approach
take care that for assigning minimum values each friend will get
wi-1 gifts as 1 is already in i.e the max one :)*/