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
   int one,zero;
   cin>>zero>>one;
   int z = max(zero,one);
   for (int i = 0; i < z; i++){
       if(zero>0){
        cout<<0;
        zero--;
       }
       if(one>0){
        cout<<1;
        one--;
       }
   }
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
/*answer is quite obvious the minimum possible creepiness
is always max(1,abs(zero-one)) and it is possible if we do
like 101010 and so on.... :)*/