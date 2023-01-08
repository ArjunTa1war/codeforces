#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v), end(v)
using namespace std;

int ans(string s, int l){
    int sum = 0;
    for (int i = 0; i < l - 1; i++)
    {
        if (s[i] == '0' && s[i+1] == '1')sum += 1;
        else if (s[i] == '1' && s[i+1] == '0')sum += 10;  
        else if (s[i] == '1' && s[i+1] == '1')sum += 11;
    }
    return sum;
}

void solve()
{
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   int second = -1;
   for (int i = n-1; i >=0; i--){
       if(s[i]=='1'){
           second = i;
           break;
       }
   }
   if(second == -1)return void(cout<<0<<"\n");
   int ds = abs((n-1)-second);
   if(ds<=k)swap(s[n-1],s[second]),k-=ds;

   int first = -1;
   for (int i = 0; i < n-1; i++){
       if (s[i]=='1'){
            first = i;
            break;
       }
   }
   if(first==-1)return void(cout<<s[n-1]<<"\n");
   int d = abs(first-0);
   if(d<=k)swap(s[0],s[first]);
   
   cout<<ans(s,n)<<"\n";
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
/* our main target is to change the first and last digit as they
are contributing the least
and we are to prefer the last digit and the first digit to be one
in order to make the total as least as possible
among last term and first term we are to prefer the last term
as if we change the first term then it will reduce the sum by
1 but if we chanct the last term then it will reduce the sum by 10 :) */