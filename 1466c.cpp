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
   string s;
   cin>>s;
   int check = 0,ans =0;
   int n = s.length();
   for (int i = 0; i < n-1; i++){
        if(i<n-2&&s[i]==s[i+1]&&s[i+1]==s[i+2])s[i+1]=s[i+2]='*';
        else if(i<n-2&&s[i]==s[i+2])s[i+2] = '*';
        else if(s[i]==s[i+1])s[i+1] = '*';
   }
   ans = count(all(s),'*');
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
/*the question is quite simple here we are just to notice that we are
just to calculate the minimum number of changes, we don't need to care
about the alphabet to fit in that if we find any a1==a2 or a1=a3
or a1 = a2= a3 then only we are to change otherwise we don't need to
change the string :)*/