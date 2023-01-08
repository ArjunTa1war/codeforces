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
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  vector<ll>cnt(27,0);
  for(auto &x : s){
    int num = x-'a';
    cnt[num]++;
  }
  ll two = 0,odd=0;
  for (int i = 0; i < 27; i++){
      two+=(cnt[i]/2);
      if(cnt[i]&1)odd++;
  }
  ll ans = 2*(two/k);
  odd+=(2*(two%k));
  if(odd>=k)ans++;
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
/*it has a simple solution that is we are to divide the string
in such a way that it gets divided to k substrings now all k should
be pallindrome now in order to make pallindrome required condition
is one unique character or two same characters and we are to keep the
count that how many characters we can use twice we will give two same
letters to each k string and we will keep on giving same charactes
till the same characters gets finished now we are to check whetere
there are odd elements also present which are not used in pallindromes
then if we have atleast k odd letters we are to add it in order to
make the string of length 2l+1 for all k strings :)*/