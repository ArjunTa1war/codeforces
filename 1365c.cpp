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
    int n,ans = 1;
    cin>>n;
    map<int,int>pos1,pos2,diff;
    for (int i = 1; i <= n; i++){
        int a;cin>>a;
        pos1[a]=i;
    }
    for (int i = 1; i <= n; i++){
        int b;cin>>b;
        pos2[b]=i;
    }
    for (int i = 1; i <= n; i++){
        int d = pos1[i]-pos2[i];
        if(d<0)d+=n;
        diff[d]++;
    }
   for(auto &x : diff)ans = max(ans,x.second);
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
    t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*question is quite simple we are just to find the difference between the position
of same number in first array and second array and our main motive is to 
find the difference which is occuring for the maximum number of time 
the differnce can be 0 too and 1 too and it only depends on the question and
thus that will be the answer :)*/