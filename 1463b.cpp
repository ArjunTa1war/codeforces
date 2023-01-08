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
   vector<ll>v(n);
   ll even=0,odd=0,sum=0;
   for (int i = 0; i < n; i++){
     cin>>v[i];
     if(i&1)odd+=v[i];
     sum+=v[i];
   }
   even = sum-odd;
   if(even>odd){
     for (int i = 0; i < n; i++){
         if(i%2==0)cout<<v[i]<<" ";
         else cout<<1<<" ";
     }
   }
   else{
    for (int i = 0; i < n; i++){
        if(i&1)cout<<v[i]<<" ";
        else cout<<1<<" ";
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
/*here one way is to write either 1 x 1 x 1 x or x 1 x 1....
in this way we can fulfill all the conditions 
we are to check the sum of digits at even places and odd places
if the even places sum is more than obvious that it is more than
the half then if we write the number itself in the other array
then difference is 0 thus contributing nothing at other places
we can write one as the sum will never be greater then the half
of the original sum :)*/






/*
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
   vector<int>pw;
   for (int i = 0; i < 31; i++){
         int a = pow(2,i);
         pw.pb(a);
   }
   for (int i = 0; i < n; i++){
       int num;cin>>num;
       for (int i = 0; i < 32; i++){
          if(pw[i]>num){
            cout<<pw[i-1]<<" ";
            break;
          }
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
*/
/*this approach is just observation that what ever the number is
if we take the closest and small (power of 2) then the difference
is alway less or equal to the half of the n/2 :)*/