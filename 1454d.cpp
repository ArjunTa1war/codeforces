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
    ll n, N;
    cin >> n;
    N = n;
    vector<ll> fac;
    ll i = 2;
    while (n){
        if (n % i == 0){
            fac.pb(i);
            n /= i;
        }
        else i++;      
        if (i > sqrt(n)){
            if (n != 1) fac.pb(n);       
            break;
        }
    }
    int sz = fac.size();
    map<ll,ll>cnt;
    for (int i = 0; i < sz; i++)cnt[fac[i]]++;
    int num=0,maxi = 0;
    for(auto &x : cnt){
        if(x.ss>=maxi){
            maxi = x.ss;
            num = x.ff;
        }
    }
    cout<<maxi<<"\n";
    for (int i = 0; i < maxi-1; i++)cout<<num<<" ";
    ll div = pow(num,maxi-1);
    cout<<N/div<<"\n";
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
/*we are just to find the all prime factorization of the number
and check which number is occured for the most number of times 
and by this we can get our answer :)*/