#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
 ll n,l;
 cin>>n>>l; 
 ll ans = 0;
 int bit[32]={0};
 for (int i = 0; i < n; i++)
 {
   int x;
   cin>>x;
   int j=0;
   while (x){
     bit[j]+=(x&1);
     x=x>>1;
     j++;
   }
 }
 for (int i = 31; i >=0; i--){
    if(bit[i]>(n/2))ans+=(1<<i);   
 }
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

/*it is simple 
there are 32 bits max and acc to question there are 30 max
so we are to make an array of 32 and keep on adding the bit to
that particular index in bits array and then we are to check
that bit now we know that bit can be either 1 or 0
so we are to check at each position 
for eg we are to check the closest distance from 18 9 21
writing it in binary
1 0 0 1 0
0 1 0 0 1
1 0 1 0 1
we are to calculate the digit that is occured for the max times so
it becomes
1 0 0 0 1 which is 17 :)*/