#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
   ll n;
   cin>>n;
   vector<int>odd,even;
   for (int i = 0; i < n; i++){
       int a;cin>>a;
       if(a&1)odd.push_back(a);
       else even.push_back(a);
   }
   if(is_sorted(even.begin(),even.end())){
       if(is_sorted(odd.begin(),odd.end())){
           cout<<"YES\n";
           return;
       }
   }
  cout<<"NO\n";
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
/*we are to sort it in increasing order 
by just swapping the elements if they are of differet parity it means
two odds can never be swapped and same for even 
now if any odd number which is greater comes before any other odd number
which is less they can never swap and same for even number also
that's why both odd numbers and even numbers should be present in sorted order
then only we can sort the array otherwise not :)*/