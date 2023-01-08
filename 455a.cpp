#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
    ll n, maxi = 0;
    cin >> n;
    ll freq[100001] = {0};
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        maxi = max(a, maxi);
        freq[a]++;
    }
    vector<ll> dp(maxi + 1,0);
    dp[0] = 0;
    dp[1] = freq[1];
    for (int i = 2; i <= maxi; i++)
    {
        dp[i] = max((freq[i] * i) + dp[i - 2], dp[i - 1]);
    }
    cout << dp[maxi];
    // if we want to check for dp[i] then we are to delete the
    // number before it and add dp[i-2]
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
    ll t = 1;
    for (ll i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/* this problem is based on dynamic approach now we are to keep on finding
the best answer till the number i now we are to find the frequency of every number
suppose only one kind of number is given answer will be freq[numbr]*number
dp[0]=0,dp[1]=freq[1] now for dp[2] there are two options 
either we are to take 2 or not it will be decided two times if we take 2
then we are to delete all occurence of one and we add dp[i-2] to it
now we are to check which is max now suppose dp[2] becomes x this the optimal
answer till 2 now suppose we are to check for dp[3] then we are to delete 2
and then we are to add dp[1] to 3*Freq[3] and then we are to check which is max
dp[i-1] or dp[3] this goes on till the end :)*/