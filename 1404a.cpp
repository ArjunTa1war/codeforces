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
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   for (int i = 0; i < k; i++){
      char ch='*';
      for (int j = i; j < n; j+=k){
        if(s[j]=='1'||s[j]=='0'){
            ch = s[j];
            break;
        }
      }
      if(ch=='*')continue;
      for (int j = i; j < n; j+=k){
        if(s[j]=='?'){
            s[j]=ch;
            continue;
        }
        if(s[j]!=ch)return void(cout<<"NO\n");
      }
   }
   int one = 0,zero = 0;
   for (int i = 0; i < k; i++){
       if(s[i]=='1')one++;
       else if(s[i]=='0')zero++;
   }
   if(one>k/2||zero>k/2)return void(cout<<"NO\n");
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
/*here the most important thing is first to equalize all strings of
length k from the beginning and s[i] should be equal to s[i+1) if we
want to the sum off all substring to be equal as suppose the string is
10111 from 1 to 3 the sum is 2 now if we move forward then we should add
the number s[i] but if s[i] is not there then sum cannever be equal so this
is the first thing but if the s[i]=='?' and there is no i such that in = i%k
and s[in]= 0 or 1 then it is quite obvious that each k will have same amount
of ? what ever the string is now in the end as all strings of k length are same
we are to count 1 and 0 if they both are below or equal half of k then the answer
exists :)*/