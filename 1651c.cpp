#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1e9+7
using namespace std;

void solve()
{
   ll n;
   cin>>n;
   vector<ll>a(n),b(n);
   for(auto &x : a)cin>>x;
   for(auto &x : b)cin>>x;
   ll min1=M,min2=M,min3=M,min4=M;
   for (int i = 0; i < n; i++)
   {
       min1 = min(abs(a[0]-b[i]),min1);
       min2 = min(abs(a[n-1]-b[i]),min2);
       min3 = min(abs(b[0]-a[i]),min3);
       min4 = min(abs(b[n-1]-a[i]),min4);
   }
   vector<ll>ans;
   ans.pb(min1+min2+min3+min4);

   ans.pb(min1+min3+abs(a[n-1]-b[n-1]));
   ans.pb(abs(a[0]-b[0])+min2+min4);
   ans.pb(abs(a[0]-b[0])+abs(a[n-1]-b[n-1]));

   ans.pb(abs(a[0]-b[n-1])+min2+min3);
   ans.pb(abs(a[n-1]-b[0])+min1+min4);
   ans.pb(abs(a[0]-b[n-1])+abs(a[n-1]-b[0]));

   ll final_ans = *min_element(ans.begin(),ans.end());
   cout<<final_ans<<"\n";
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
/*main approach of the question is 
each corner computer is connected to opposite row
and now we are to find the b[i] for a[0] such that a[0]-b[i] is minimum
and same for a[n-1],b[0]andb[n-1] now if 
we are connecting corner computer then we are counting that network as 2*a
but in acutal it is 'a' that's why we need to make all cases :)*/