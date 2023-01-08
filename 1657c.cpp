#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v), end(v)
using namespace std;

void solve()
{
    int n, c = 0,r=-1;
    cin >> n;
    string s,ans = "";
    cin >> s;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if(s[i]=='('&&i<n-1){
            c+=1;
            i++;
            r = i;
        }
        else{
              int it = find(s.begin()+i+1,s.end(),')')-s.begin();
              if(it>=n)break;
              c+=1;
              i = it;
              r = i;
        }
    }
    cout<<c<<" "<<n-r-1<<"\n";
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
/*if the s[i] = '(' then there is no need to worry as
() is regular and (( is a pallindrome so it is the shortest
prefix and thus it is removed from the string
now if s[i] == ')' only one option is there that is it should be
pallindrome now (like )() ) we are to find the first time ) will come after it
as it will be the shortest pallindrome and we are to find the shortest
substring only that's why we will remove it in the end we are to check 
how many characters are still in the string and that will be the r and 
c is the number of operations on it :)*/