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
   int n;
   cin>>n;
   set<int>st;
   vector<ll>v(n),ans(n,0);
   vector<ll>prime = {2,3,5,7,11,13,17,19,23,29,31};
   for(auto &x : v)cin>>x;
   for (int i = 0; i < n; i++){
      for (int j = 0; j < 11; j++){
          if(v[i]%prime[j]==0){
            st.insert(prime[j]);
            break;
          }
      }
   }
  int j = 1;
  for(auto &x : st){
     for (int i = 0; i < n; i++){
         if(ans[i]==0&&(v[i]%x)==0)ans[i]=j;
     }
     j++;
  }
   cout<<st.size()<<"\n";
   for(auto &x : ans)cout<<x<<" ";
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
/*it is quite simple that each number is less than 1000 and composite
the worst case it can have is the number is the square of the prime numbers
now each number can be defined as the product of primes so we are just to
check which prime number can divide the given number and thus we can get
our answer :)*/