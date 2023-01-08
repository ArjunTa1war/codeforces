#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

void solve(){
  ll n,q;
  cin>>n;
  map<ll,ll>cnt;
  for (int i = 0; i < n; i++){
    ll a;cin>>a;
    cnt[a]++;
  }
  ll sq=0,rec=0;
  for(auto &x : cnt){
    sq+=x.ss/4;
    rec+=x.ss/2;
  }
  cin>>q;
  for (int i = 0; i < q; i++){
    char ch;
    cin>>ch;
    ll num;
    cin>>num;
    if(ch=='+'){
        cnt[num]++;
        if(cnt[num]%4==0)sq++;
        if(cnt[num]%2==0)rec++;
    }
    else{
        if(cnt[num]%4==0)sq--;
        if(cnt[num]%2==0)rec--;
        cnt[num]--;
    }
    if(sq>=1&&rec>=4)cout<<"YES\n";
    else cout<<"NO\n";
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
/*for making a rectangle we need to 2 pairs of lenghts of same size
and for making square we need 4 lengths of same size now how we can make
rectangle
2 * (2same size block)
1 * (4 same size block)
and for maing square we need 
1 * (4 same size block)
so we need this only
now we have sq = 1 then it is quite obvious rec = 2 so we need extra
2 rec atleast in order to make the rectangle and 2 rec is because of
one sq we the condition becomes
rec>=4 && sq>=1 and if the sq = 2 then automatically rec will be 4 but
it is not necessary that if the rec = 4 then sq is also one :)*/