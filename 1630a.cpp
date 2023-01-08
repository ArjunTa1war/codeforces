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
  int n,k;
  cin>>n>>k;
  if(n==4&&k==n-1)return void(cout<<"-1\n");
  if(k==n-1){
    cout<<n-1<<" "<<n-2<<"\n";
    cout<<0<<" "<<2<<"\n";
    cout<<1<<" "<<n-3<<"\n";
    for (int i = 3; i <n/2 ; i++)cout<<i<<" "<<n-i-1<<"\n";
  }
  else if(k==0)for (int i = 0; i < n/2; i++)cout<<i<<" "<<n-i-1<<"\n";
  else{
  cout<<n-1<<" "<<k<<"\n";
  cout<<0<<" "<<n-k-1<<"\n";
  for (int i = 1; i < n/2; i++){
    if(i==k||i==n-k-1)continue;
    cout<<i<<" "<<n-i-1<<"\n";
  }
  }
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
/*it is totally implementation based problem first thing is n that is in
the form of 2^k and we know that in such cases for every (i) then 
i&(n-i-1) = 0 and we are given k <=n-1 for k less than n-1 we can do 
like where there is k we are to make it in pair with the n-1 as
k&(n-1)  = k and the value with k is used with the 0 so that the (n-k-i)&0 = 0
now it comes the turn of k = n-1 where we are to do three operations of our choice
it can be any operation what we can do is use the k  as n-2 and then combine
1 with odd number k and (n-k-1)with 0 :)*/