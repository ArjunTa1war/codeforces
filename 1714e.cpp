#ifdef LOCAL
#include "arjun.hpp"
#else
#include <bits/stdc++.h>
using namespace std;
#define dbg(...)
#endif
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)

void solve()
{
  int n;
  cin>>n;
  vector<ll>v(n);
  for (int i = 0; i < n; i++){
    cin>>v[i];
    if(v[i]&1)v[i]+=(v[i]%10);
  }
  sort(all(v));
  for (int i = 0; i < n-1; i++){
    if(v[i]==v[i+1])continue;
    if(v[i]%10==0||v[i+1]%10==0)return void(cout<<"NO\n");
    int dif = (v[i+1]/10)-(v[i]/10);
    int f1 = v[i]%10;
    int f2 = v[i+1]%10;
    if(f1!=6)f1=2;
    if(f2!=6)f2=2;
    if(f1==f2&&dif%2==0)continue;
    else if(f1!=f2&&dif&1)continue;
    else return void(cout<<"NO\n");
  }
  cout<<"YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*now if we take some examples we can apporach to the solution very easily
now if the a%10 is 2,4,8 then the next time it will approach to 2,4,8 is 
any even number added to the tens place of it like
12,14,18,32,34,38 it will go on like this and if the number is 6 then
the next time it will have 6 is any even number added to the 10's place
so this question totally revolves around the tens place :)*/