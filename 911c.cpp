#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
   int k[3];
   cin>>k[0]>>k[1]>>k[2];
   int one=0,two=0,three=0,four=0;
   for (int i = 0; i < 3; i++)
   {
       if(k[i]==1)one++;
       if(k[i]==2)two++;
       if(k[i]==3)three++;
       if(k[i]==4)four++;
   }
   if (one>=1||two>=2||three>=3)cout<<"YES\n";
   else if(two==1&&four==2)cout<<"YES\n";
   else cout<<"NO\n";
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
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*this is observation based question now write all the possible cases
and then print yes for those cases only and no for rest of the cases
and we are to consider one '2' and two '4' conditions also as we can 
write 1,3,4,5,6 and 2,6,10 and 4,8,12 which is required :)*/