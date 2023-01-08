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
   int n,x,num;
   cin>>n>>x;
   vector<int>cnt(x+1);
   for (int i = 0; i < n; i++){
     cin>>num;
     cnt[num]++;
   }
   for (int i = 1; i < x; i++){
      int num = cnt[i]/(i+1);
      int rem = cnt[i]%(i+1);
      if(rem)return void(cout<<"NO\n");
      cnt[i+1]+=num;
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
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*The question is quite simple we are just to keep one thing in mind suppose the
sum of the factorials is s and acc. to questoin s*n == x where n is natural number
so the best approach is to convert the x! to (x+1)! suppose the number are like
3! 3! 3! 3! then there are 4 threes we can write it like 4! and we are to add the
numbers of (x+1)we can make from x to the x and if we are unable to do so that is
some remainder is there then return NO :)*/