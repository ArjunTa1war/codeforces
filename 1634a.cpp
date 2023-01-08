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
   string s;
   cin>>s;
   if(k==0)cout<<"1\n";
   else{
       string s2=s;
       reverse(s2.begin(),s2.end());
       if(s2==s)cout<<"1\n";
       else cout<<"2\n";
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
/*it is quite obvious that 
let suppose a string
abcdef now reverse of it is fedcba
now two possible string are abcdeffedcba and fedcbaabcdef
now if we check these both strings are pallindrome
reverse of abcdeffedcba is abcdeffedcba
and reverse of fedcbaabcdef is fedcbaabcdef so when we will
add reverse of pallindrome to pallindrome it remains pallindrome
that's why max answer can be 2 and least can be 1 :)*/