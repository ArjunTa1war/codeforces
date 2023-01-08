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
    int n;
    cin >> n;
    map<int,int> mp;
    vector<int> v(n),ans;
    for (auto &x : v){
        cin >> x;
        mp[x]++;
    }
    for (int i = 0; i < n; i++){
        bool chk = false;
        for (int j = v[i]+1; j <= 2 * n; j++){
            if (mp[j]==0){
                ans.pb(v[i]);
                ans.pb(j);
                mp[j]++;
                chk = true;
                break;
            }
        }
        if(chk==false){
            cout<<-1<<"\n";
            return;}
    }
    for(auto &x : ans)cout<<x<<" ";
    cout<<"\n";
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
/*we are given array b of n numbers and we are to write permutation of
2*n numbers such that b[1] is the min of a[1]a[2] ,b[2] is the min of
a[3],a[4] and so on ,our main approach is to check the number which is
more than the given number and it is not repeating and it is less than
equal to 2*n if we are successfull we are to keep on writing the values
otherwise print -1 and we are to find the lexico graphically minimal 
permutation that's why it is quite obvious that a[1] = b[1],a[3] = b[2]
a[5] = b[3] and so on and this is the approach :)*/