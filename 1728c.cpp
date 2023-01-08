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

int cal_min(vector<int>&a,vector<int>&b,bool cond){
   int ans = 0;
   map<int,int>am,bm;
   for (int i = 0; i < a.size(); i++)am[a[i]]++;
   for (int i = 0; i < b.size(); i++){
        if(b[i]<10&&cond)continue;
        if(am[b[i]]){
           am[b[i]]--;
           bm[b[i]]++;
           b[i]=1;
        }
        else{
          if(b[i]==1)continue;
          b[i] = log10(b[i])+1;
          ans++;
        }
   }
   for (int i = 0; i < a.size(); i++){
     if(a[i]<10&&cond)continue;
     if(bm[a[i]]){
        bm[a[i]]--;
        a[i] = 1;
     }
     else
     {
      if(a[i]==1)continue;
      a[i] = log10(a[i])+1;
      ans++;
     }
   } 
   return ans;
}

void solve()
{
  int n;
  cin>>n;
  vector<int>a(n),b(n);
  for(auto &x : a)cin>>x;
  for(auto &x : b)cin>>x;
  int ans = cal_min(a,b,true);
  ans+=cal_min(a,b,false);
  cout<<ans<<"\n";
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
/*the question is totally based on two steps that is check the same
or either reduce it first we are to do one thing that is we are to check
all the same elements if the number is more than 3 digits and then we
are to reduce them to one digit if their corresponding same number in
the other array doesn't exists and then it comes the turn of all the numbers
less than 10 if the number is already 1 then there is no worry and for
others we are to reduce it to one :)*/