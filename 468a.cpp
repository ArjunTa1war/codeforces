#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

void solve(){
   ll n;
   cin>>n;
   if(n<4)return void(cout<<"NO\n");
   cout<<"YES\n";
   if(n%2==0){   
   cout<<"1 * 2 = 2\n";
   cout<<"2 * 3 = 6\n";
   cout<<"6 * 4 = 24\n";
   for (int i = 5; i <= n; i+=2){
    cout<<i+1<<" - "<<i<<" = "<<1<<"\n";
   }
   ll cnt = ((n-4)/2);
   for (int i = 0; i < cnt-1; i++)cout<<"1 * 1 = 1\n";
   if(n>4)cout<<"24 * 1 = 24\n";
   }
   else
   {
    cout<<"5 * 4 = 20\n";
    cout<<"20 + 3 = 23\n";
    cout<<"23 + 2 = 25\n";
    cout<<"25 - 1 = 24\n";
    for (int i = 6; i <= n; i+=2){
      cout<<i+1<<" - "<<i<<" = "<<1<<"\n";
    }
    ll cnt = ((n-5)/2);
    for (int i = 0; i < cnt-1; i++)cout<<"1 * 1 = 1\n";
    if(n>5)cout<<"24 * 1 = 24\n";
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
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*this is just a basic implementation nothing more than that actually
there are n digits now if we take two digits out of it we will have one
digit so after n-1 operation only 1 number is left and that number should
be 24 so this is the best way that we first find out whether the n is
odd or n is even then we are to write the answer accoridngly :)*/