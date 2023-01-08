#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve()
{
   ll n;
   cin>>n;
   vector<pair<ll,ll>>v(n+1);
   ll sum = 0;
   for (ll i = 0; i < n; i++)
   {
       cin>>v[i].first;
       v[i].second = i+1;
   }
   sort(v.rbegin(),v.rend());//reverse sort
   vector<int>ans(n+1);
   ll num = 1;
   for (int i = 0; i < n; i++){
       if (num>0){
           ans[v[i].second] = num;
           sum += (v[i].first)*(abs(num)*2);
           num = -num;
       }else{
           ans[v[i].second] =num;
           sum += (v[i].first)*(abs(num)*2);
           num = -num;
           num++;
       }
   }
   cout<<sum<<"\n";
   for(auto &x : ans)cout<<x<<" ";
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
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*it is based on the observation 
for eg 
5
3 8 10 6 1  we will give corresponding values to it
1 2 3 4 5   and thus this will be the position of elements
now if we reverse sort the vector  we get
10 8 6 3 1
3 2 4  1 5  so this is the sorted form
now we need to give values like 0 -1 1 2 -2 and like this
we get 
something like
1 -1 2 -2 3
that is arr[3] = 1 ,arr[2] = -1 and like this  and array becomes
0 -2 -1 1 2 3 and this is the required solution :)*/