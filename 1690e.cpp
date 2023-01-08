#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

void solve(){
 ll n,k;
 cin>>n>>k;
 ll ans = 0;
 vector<ll>zero;
 for (int i = 0; i < n; i++){
    int a;
    cin>>a;
    ans+=(a/k);
    if(a%k!=0)zero.pb(a%k);
 }
 sort(all(zero));
 int sz = zero.size();
 int strt=0,end=sz-1;
 while (strt<end){
    if(zero[strt]+zero[end]>=k)ans++,strt++,end--;
    else strt++;
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
/*this question is quite simple we are first to add x/k to the answer
and then we are to keep the remainder list in the other array we
are to sort the array and check over all the array such that 
a[i]+a[j]>=k if this condition satisfies then add 1 to the answer :)*/