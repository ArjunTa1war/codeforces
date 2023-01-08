#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

vector<vector<int>>ans;

void func(vector<int>temp,int ind,vector<int>v){
    if(ind==v.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(v[ind]);
    func(temp,ind+1,v);
    temp.pop_back();
    func(temp,ind+1,v);
}

void solve(){
  int n,l,r,x;
  cin>>n>>l>>r>>x;
  vector<int>v(n);
  for(auto &x : v)cin>>x;
  vector<int>temp;
  func(temp,0,v);
  int final = 0;
  for (int i = 0; i < ans.size(); i++){
      int mini = 1e9;
      int maxi = -1e9;
      int sum = 0;
      for (int j = 0; j < ans[i].size(); j++){
        mini = min(ans[i][j],mini);
        maxi = max(ans[i][j],maxi);
        sum+=ans[i][j];
      }
      if(sum>=l&&sum<=r&&maxi-mini>=x)final++;
  }
  cout<<final<<"\n";
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
        solve();
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}

/*it is totally the subset finding problem just find the
subset and check the conditions :)*/