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
   int n;
   cin>>n;
   string s;
   cin>>s;
   s.pb('a');
   ll ans =n;
   for (int i = 1; i < n; i++){
       if(s[i]!=s[i-1])ans+=i;
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
/*if we ever find 
->01 then we can delete all the terms before 1 as 
1111101 becomes 111101 ,11101,101,01,1 as 10 = 0 and 01 = 1

->10 then also we can delte all the terms before 0 as
1111110 then it 111110 ,1110,10,0 

now we are to add (i+1) because suppose the term is
xxxx10 then we can choose 10,x10,xx10,xxx10 and so on which
counts for (i+1) :)*/