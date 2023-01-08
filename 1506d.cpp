#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
   ll n,a;
   cin>>n;
   ll maxi = 0;
   map<ll,ll>hash;
   for (int i = 0; i < n; i++)
   {
       cin>>a;
       hash[a]++;
   }
   for(auto &a : hash){
       maxi = max(a.ss,maxi);
   }
   if(maxi <= n/2){
       if(n&1)cout<<1<<"\n";
       else cout<<0<<"\n";
   }
   else{
      cout<<n-((n-maxi)*2)<<"\n";
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

/*here our main task is to find the max occurence of any element in the
array and we can know this by using map
unordered map will give use tle because
if we want to traverse the whole map time complexity becomes O(n) 
but map always use O(logn)which is better
Now if the maxi is less then the half then it is quite obvious  that n/2 pairs
will be made (or we can say that max element will make a pair with 2nd best
and this thing goes on )
and n-n/2 will be left that is if n=odd then one is the answer
now if maxi>half then all numbers other than maxi will make a pair with maxi
and total elements in pair will be 2*(n-maxi)and the elements other then this
will not be deleted  :)*/