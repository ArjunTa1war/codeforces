#include <bits/stdc++.h>
using ll = long long;
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

map<ll,ll>fact;
vector<ll>num;

void factorial(vector<ll>temp,int ind){
   if(ind==12){
     ll sz = temp.size();
     ll sum = accumulate(temp.begin(),temp.end(),0LL);
     if(fact[sum]==0)fact[sum]=sz;
     else fact[sum] = min(fact[sum],sz);
     return;
   }
   temp.push_back(num[ind]);
   factorial(temp,ind+1);
   temp.pop_back();
   factorial(temp,ind+1);
}

void solve(){
  ll n;
  cin>>n;
  ll ans = __builtin_popcountll(n);
  for(auto &x : fact){
     if(x.first>n)break;
     ans = min(ans,(x.second+__builtin_popcountll(n-x.first)));
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
    ll t;
    cin >> t;
    ll cnt=2;
    for(int i = 3;i<=14;i++)cnt*=i,num.push_back(cnt);
    vector<ll>tmp;
    factorial(tmp,0);
    for (int i = 0; i < t; i++){
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}

/*this question is totally based on the fact that we are to
check all the subsets for finding the factorial and then we can
find the number of bits that is number of power of 2's required
and this can be done simply using recursion :)*/