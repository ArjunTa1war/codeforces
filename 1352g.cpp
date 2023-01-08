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
   ll n;
   cin>>n;
   if(n==2||n==3)return void(cout<<"-1\n");
   if(n==4)return void(cout<<"3 1 4 2\n");
   for (int i = 1; i <= n; i+=2)cout<<i<<" ";
   if(n&1){
    cout<<n-3<<" "<<n-1<<" ";
    for (int i = n-5; i >1; i-=2)cout<<i<<" ";
    cout<<"\n";
   }
   else{
    cout<<n-4<<" "<<n<<" "<<n-2<<" ";
    for (int i = n-6; i >1; i-=2)cout<<i<<" ";
    cout<<"\n";
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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*this is basic implementation + observation that is
if the number is odd then write
1 3 5 7 9 11 13 15 (12 14 10) 8 6 4 2 
if the number is even then write
1 3 5 7 9 11 13 15 (12 16 14 10) 8 6 4 2 here it is the matter of
3 and 4 terms we are to choose those in such a way that the difference is
betweeen 2 to 4 :)*/