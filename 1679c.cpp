#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

void solve(){
 ll n,q,t,a1,b1,a2,b2;
 cin>>n>>q;
 vector<ll>x(n+1),y(n+1);
 set<int>row,col;
 for (int i = 0; i < q; i++){
    cin>>t;
     if(t==1){
       cin>>a1>>b1;
       x[a1]++;
       y[b1]++;
       row.insert(a1);
       col.insert(b1);
     }
     else if(t==2){
        cin>>a1>>b1;
        x[a1]--;
        y[b1]--;
        if(x[a1]==0)row.erase(a1);
        if(y[b1]==0)col.erase(b1);
     }
     else{
        cin>>a1>>b1>>a2>>b2;
        if (x[a1]&&x[a2]){
             if (a2-a1==distance(row.begin(),row.find(a2))-distance(row.begin(),row.find(a1))){
                cout<<"YES\n";
                continue;
             }
        }    
         if (y[b1]&&y[b2]){
             if (b2-b1==distance(col.begin(),col.find(b2))-distance(col.begin(),col.find(b1))){
                cout<<"YES\n";
                continue;
             }
         }
        cout<<"NO\n";
     }
 } 
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
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}