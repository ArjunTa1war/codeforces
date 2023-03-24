#ifdef LOCAL
#include "arjun.hpp"
#else
#include <bits/stdc++.h>
using namespace std;
#define dbg(...)
#endif
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)

void solve()
{
    int n;
    cin>>n;
    vector<vector<int>>g(n+1,vector<int>(n+1));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)cin>>g[i][j];
    }
    vector<int>todl(n);
    for(auto &x : todl)cin>>x;
    reverse(todl.begin(),todl.end());
    vector<long long>sum(n);
    vector<int>total;
    for (int k = 0; k < n; k++){
        int nod = todl[k];
        total.push_back(nod);
        for (int i = 1; i <= n; i++){
             for(int j = 1;j<=n;j++){
                g[i][j] = min(g[i][j],g[i][nod]+g[nod][j]);
             }
        }
        for (int i = 0; i < total.size(); i++){
             for (int j = 0; j < total.size(); j++){
                sum[k] += g[total[i]][total[j]];
             }
        }
    }
    for (int i = n-1; i >=0; i--)cout<<sum[i]<<" ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/* now this question is done using floyd warshall algorithm here we
are given the order in which we are deleting the elements now what we
can do is check it from the end that is keep on adding the elements from
the end and then changing the all edges step by step then check the
sum of edges of each vertex :)*/