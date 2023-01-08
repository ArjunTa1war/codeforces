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
   int n,k,a;
   cin>>n>>k;
   map<ll,ll>mp;
   vector<ll>ans;
   for (int i = 0; i < n; i++){
    cin>>a;
    mp[a]++;
   }
   for(auto &x : mp)if(x.ss>=k)ans.pb(x.ff);
   sort(all(ans));
   if(ans.size()==0)return void(cout<<-1<<"\n");
   int l=ans[0],r=ans[0];
   int lex = l,rex=r;
   int d = -1;
   for (int i = 0; i+1 < ans.size(); i++){
       if(ans[i]+1==ans[i+1])r++;
       else {
         int diff = abs(r-l);
         if(diff>d){
            lex = l;
            rex = r;
            d = diff;
         }
         l = ans[i+1];
         r = ans[i+1];
       }
   }
   int diff = abs(r-l);
   if(diff>d){
    lex = l;
    rex = r;
   } 
   cout<<lex<<" "<<rex<<"\n";
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
/*the solution is quite simple we are just to find
all the numbers occuring more than k or equal to k
times and then we are to check the longest continuous
substring in the sorted vector and that will be the solution :)*/ 