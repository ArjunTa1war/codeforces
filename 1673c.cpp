#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;
int req = 40001;

bool ispallindrome(int n){
  	    string s  = to_string(n);
		string t = s;
		reverse(t.begin(), t.end());
		if (s == t)return 1;
        return 0;
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
    vector<ll>pal;
    pal.pb(0);
    for (int i = 1; i <req ; i++)if(ispallindrome(i))pal.pb(i);
    int sz = pal.size();
    vector<vector<ll>>dp(req,vector<ll>(sz+1));
    for (int i = 1; i < sz; i++)dp[0][i]=1;
    for (int i = 1; i < req; i++){
         for (int j = 1; j < sz; j++){
            dp[i][j]=dp[i][j-1];
            if(pal[j]<=i)dp[i][j]=(dp[i][j]+dp[i-pal[j]][j])%M;
         }
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
          int n;
          cin>>n;
          cout<<dp[n][sz-1]<<"\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*this question is totally based on dp first we are to create a vector
of all the numbers that is between 0 to 40000 that are pallindromes and now
we are to maintain an array dp[i][j] where i denotes the number to be made
and m denotes the */