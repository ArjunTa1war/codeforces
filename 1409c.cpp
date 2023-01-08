#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
   int n,x,y,min_dif;
   cin>>n>>x>>y;
   int d = y-x;
   for (int i = n-1; i >0; i--){
       if (d%i==0){
           min_dif = d/i;
           break;
       }
   }
   int no_between = (d/min_dif)+1;
   int no_left = n-no_between;
   for (int i = x-min_dif; i >0; i-=min_dif)
   {
       if(no_left==0)break;
       cout<<i<<" ";
       no_left--;
   }
   for (int i = y+min_dif; i <=1e9; i+=min_dif)
   {
       if(no_left==0)break;
       cout<<i<<" ";
       no_left--;
   }
   for (int i = x; i <=y; i+=min_dif)cout<<i<<" ";
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
/*it is quite based on observation 
now we are given 2 numbers initially and we are to find n numbers 
such that max is least as possible and the numbers are in ap
now if we want to have the least possible max then we need to find
the minimum possible difference between the numbers 
and since if n = 5 and the differnce is 30 then we are not to divide
30 by 5 then 5+1 numbers will be formed which we don't need that's why
we are to start dividing it by n-1 to 1 
now when we find the minimum difference we are to find the digits we
can add between [x,y] after checking this we are to start from x to 
1 and after completing the whole loop too.. the the total numbers are less
than n then we are to go from y to 1e9 till we the num_left becomes zero :)*/