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
   int n,total=0;
   cin>>n;
   vector<int>v(n);
   int mp[8002]={0};
   for(auto &x : v)cin>>x;
   for (int i = 0; i < n; i++){
      int sum = v[i];
      for (int j = i+1; j < n; j++){
          sum+=v[j];
          if(sum>n)break;
          mp[sum]=1;
      }
   }
   int ans = 0;
   for (int i = 0; i < n; i++){
     if(mp[v[i]]>0)ans++;
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
/*question is simple in order to make it time efficient and memory efficient
we are to use array and store the number in the array if and only if it is less
then or equal to n otherwise the sum is of no use :)*/