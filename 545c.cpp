#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
    ll n,ans=2;
    cin>>n;
    if(n==1||n==2){
        cout<<n<<"\n";
        return;
    }
    vector<ll>x(n),h(n),d(n);
    for (int i = 0; i < n; i++) cin>>x[i]>>h[i];
    for (int i = 1; i < n; i++)d[i] = x[i]-x[i-1];
    for (int i = 1; i < n-1; i++){
       if (h[i]<d[i])ans++;
       else if(h[i]<d[i+1]){
           ans++;
           d[i+1]-=h[i];
       }
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
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*now we are first to fall the left most tree to left and right most tree to right
then we are to keep on cutting the tree to the left if space is availabe and to the
right if space is available and then decrease the d[i] by h[i] 
if we fall some trees to right it may only prevent the next tree to fall
so here we can exchange one tree to another but our main approach is to check
the left space first 
for eg suppose we fell the tree now it cannot fell to either right nor left
then it will just exchange the fallen tree answer will remain same :)*/ 