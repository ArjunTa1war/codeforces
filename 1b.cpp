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
   int chk = 0;
   while (s[chk]>='A'&&s[chk]<='Z')chk++;
   while (s[chk]>='0'&&s[chk]<='9')chk++;
   if (chk==s.length()){
      string pre,ans;
      ans.pb('R');
      for (int i = 0; i < s.length(); i++){
         while (s[i]>='A'&&s[i]<='Z')i++;
         ans.pb(s[i]);
      }
      ans.pb('C');
      ll col = 0;
      ll sz = s.length()-(ans.size()-2);
      for (int i = 1; i<sz; i++)col+=pow(26,i);
      for (int i = 0; i < sz; i++){
         int x = s[i]-65;
         col+=x*pow(26,(sz-i-1));
      }
      col++;
      ans+=to_string(col);
      cout<<ans<<"\n";
   }
   else
   {
    string s1,s2,ans;
    int chk = 1;
    while (s[chk]<='9'&&s[chk]>='0')s1.pb(s[chk]),chk++;
    chk++;
    while (s[chk]<='9'&&s[chk]>='0'&&chk<s.length())s2.pb(s[chk]),chk++;
    ll col = stoi(s2);
    ll c = 0,l=0,prev=0;
    for (int i = 1; i < 30; i++){
         c+=pow(26,i);
         if(c>=col){
            l = i;
            break;
         }
         prev = c;
    }
    col-=prev;
    col--;
    for (int i = 0; i < l; i++)ans.pb('A');
    for (int i = 0; i < l; i++){
        ll num = pow(26,l-i-1);
        if(num<=col){
             int x = col/num;
             col = col%num;
             ans[i]+=x;
        }
        if(col==0)break;
    }
    ans+=s1;
    cout<<ans<<"\n";
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
/*this is just a problem of implementation nothing more than that in this
we are to check which type of string is this than we are to convert
and we are to take care that 1 digit strings 26 then 2 digit strings 26*26
and so on :)*/