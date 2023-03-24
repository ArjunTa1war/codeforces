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
const int N = 2e3+10;

int parent[N];
int Size[N];

void make(int v){
    parent[v] = v;
    Size[v] = 1;
}
int find(int v){
    if(v==parent[v])return v;
    return parent[v] = find(parent[v]);
}

void Union(int a,int b){
    a = find(a);
    b = find(b);
    if(a!=b){
    if(Size[a]<Size[b])swap(a,b);
    parent[b] = a;
    Size[a]+=Size[b];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    vector<pair<int,int>>cities(n+1);
    for (int i = 1; i <= n; i++){
        cin>>cities[i].first>>cities[i].second;
    }
    vector<int>c(n+1),k(n+1);
    for (int i = 1; i <= n; i++)cin>>c[i];
    for (int i = 1; i <= n; i++)cin>>k[i];
    vector<pair<ll,pair<ll,ll>>>edges;
    for (int i = 1; i <= n; i++)edges.push_back({c[i],{0,i}});
    for (int i = 1; i <= n; i++){
         for (int j = i+1; j <= n; j++){
             ll tk = k[i]+k[j];
             ll distx = (cities[i].first-cities[j].first);
             ll disty = (cities[i].second-cities[j].second);
             ll wt = abs(distx)+abs(disty);
             wt*=tk;
             edges.push_back({wt,{i,j}});
         }
    }
    sort(edges.begin(),edges.end());
    vector<pair<int,int>>ed;
    vector<int>po;
    for (int i =1; i <=n; i++)make(i);
    ll totalcost = 0;
    for(auto &x : edges){
        ll wt = x.first;
        int a = x.second.first;
        int b = x.second.second;
        if(find(a)==find(b))continue;
        if(a==0)po.push_back(b);
        else ed.push_back({a,b});
        Union(a,b);
        totalcost+=wt;
    }
    cout<<totalcost<<"\n";
    cout<<po.size()<<"\n";
    for(auto &x : po)cout<<x<<" ";
    cout<<"\n";
    cout<<ed.size()<<"\n";
    for(auto &x : ed)cout<<x.first<<" "<<x.second<<"\n";
    return 0;
}

/*it is a good question of minimum spanning tree here we are just to
apply the kruskal algorithm in order to find the minimum spanning tree
here the main thing was to discover a node that supply the power to all
node otherwise it would be difficult to manage all things that is
which node/path to choose for the connection and which one should have
it's own power :)*/