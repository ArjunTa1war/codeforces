#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

void solve(){
  ll n,ans=0;
  cin>>n;
  string s;
  cin>>s;
  map<int,int>mp;
  vector<int>v(n);
  for (int i = 0; i < n; i++)v[i]=(s[i]-'0')-1;
  mp[0]=1;
  ll sum = 0;
  for (int i = 0; i < n;i++){
     sum+=v[i];
     ans+=mp[sum];
     mp[sum]++;
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

/*this question is based on observation that is if the sum  is equal to the
length then s-l must be zero that is if we decrease each element in s by 1 then
the sum of the substring must be zero and that is the main point here
so first we will make an array which contains the arr[i]-1 elements and then
we need to find the number of subarray containing the sum = 0 and that will
be the answer :)*/