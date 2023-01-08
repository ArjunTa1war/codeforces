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
   ll ans =0;
   for (int i = 0; i < k/2; i++){
      vector<int>cnt(27,0);
      for (int j = i; j < n; j+=k) cnt[s[j]-'a']++;
      for (int j = k-i-1; j < n; j+=k)cnt[s[j]-'a']++;
      int num1 = 2*(n/k);
      int num2 = *max_element(all(cnt));
      ans += num1-num2;
   }
   if(k&1){
  vector<int>cnt(27,0);
   for (int i = k/2; i < n; i+=k)cnt[s[i]-'a']++;
   int num1 = n/k;
   int num2 = *max_element(all(cnt));
   ans+=num1-num2;
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
/*this question is totally based on the observation that is if string
is in pallindrome then every k should be a pallindrome
0 1 2 3 4 5 6 7 8 suppose k = 3 then
0 3 6 should be same now the last element should also be same 
0 8 should be same now 8 5 2 should also be same and thus
we are to compare them we are to check which letter is repeated the 
most number of times we are to keep them unchanged and change the rest
of the numbers :)*/