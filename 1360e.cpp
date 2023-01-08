#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
   int n;
   cin>>n;
   vector<string>pol(n);
   for (int i = 0; i < n; i++){
      cin>>pol[i];
   }
   for (int i = 0; i < n; i++){
     for (int j = 0; j < n; j++){
         int chk=0;
        if(pol[i][j]=='1'){
            if(i==n-1||j==n-1)continue;
            if(pol[i][j+1]=='1')chk =1;
            if(pol[i+1][j]=='1')chk=1;
            if(chk==0){
                cout<<"NO\n";
                return;
            }
        }
     }  
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
/*it is quite simple we are to check that every one has some support
from right or down (end of polygon is also a support that's why we will
not check for i,j=last)now if there is atleast one '1' either below or either
to the right of every '1' then cout yes otherwise no :)*/