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
   int n;
   cin>>n;
   vector<ll>v(n);
   for(auto &it : v)cin>>it;
   string s;
   cin>>s;
   vector<ll>red,blue;
   for (int i = 0; i < n; i++){
    if(s[i]=='B')blue.pb(v[i]);
    else red.pb(v[i]);
   }
   sort(all(blue));
   sort(all(red),greater<int>());
   for (int i = 0; i < blue.size(); i++){
     if(blue[i]<(i+1))return void(cout<<"NO\n");     
   }
   for (int i = 0; i < red.size(); i++){
      if(red[i]>(n-i))return void(cout<<"NO\n");
   }
   cout<<"YES\n";
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
/*the question is quite simple we are just to make separate
arrays for blue and red colors and in blue we can only substract
it by 1 now here we are to notice that the best possible sorted array can
be 1 2 3 4 5 so we are to make array look like this now if the array
is like 1 2 2 3 4 5 then for one 2 we can not decrease it further as
it will be already present now for the red purpose at nth positon there
must not be more than 1 element till n-1 there shouldnot be more than
2 elements and so on :)*/