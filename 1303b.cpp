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
   ll n,g,b,nc;
   cin>>n>>g>>b;
   ll good = (n+1)/2;
   ll bad  =  n-good  ;
   ll good_required = good/g;
   ll leftover = good%g;
   ll ans = good_required*(g+b);
   if(leftover==0)ans-=b,good_required--;
   ans+= leftover+max((ll)0,bad-(b*good_required));
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
/*it is quite simple we are first to complete (n+1)/2 good roads and we
are to find how many time we are to use g and it is simple we are to use
(g+b)*freq as we are using bad days also now suppose we are done with good
days that is g b g b now the good road required condition is achieved so we
are to remove b from the answer as we have used the algo g b g b g b (remainder)
now we need to know how many days we bad in between thse as we also need to
repair other roads so other roads left are n/2 now after achieving the goal
of good roads we can use g for preparing bad roads also :)*/