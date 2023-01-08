#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
   int n,k;
   cin>>n>>k;
   int max = n*k;
   if(k>1&&(n&1)){
       cout<<"NO\n";
       return;
   }
   int even = 2,odd=1;
   cout<<"YES\n";
   for (int i = 0; i < n; i++){
       for (int j = 0; j < k; j++)
       {
           if(i<n/2)cout<<even<<" ",even+=2;
           else cout<<odd<<" ",odd+=2;
       }
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
/*
there are two condition that is on n
now we know that 
arithmetic mean of consecutive odd+odd+odd+odd is always an integer
and aritmentic mean consecutive of even+even+even is also an integer
and n should be even such that n/2 shelf are filled with only odd numbers
and n/2 shelfes are filled with only even numbers
now if k>2 and n = 5
then we can write 1,3 | 5,7 | 2,4 | 6,8 | 9,10
in last there will one shelf where there will be even
as well as odd and that case wouldn't work :)
*/