#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
 int n;
 cin>>n;
 vector<int>v(n);
 for(auto &x : v)cin>>x;
 for (int i = 0; i < n-1; i++){
     if (v[i]==v[i+1]&&v[i]!=3) v[i+1] = 0;
     if(v[i+1]==3){
        if (v[i]==1)v[i+1]=2;
        else if(v[i]==2)v[i+1]=1;
    }
 }
 cout<<count(v.begin(),v.end(),0);
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
    t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*
15
3 2 3 3 3 2 3 1 3 2 2 3 2 3 3 

after just (checking 1,1 &2,2)
3 2 3 3 3 2 3 1 3 2 0 3 2 3 3 
after just (checking 1,3 & 2,3);
3 2 1 2 1 2 1 1 2 2 0 3 2 1 2 //here 
after just (checking 1,1 & 2,2)again
3 2 1 2 1 2 1 0 2 0 0 3 2 1 2

after checking all three condition just once
3 2 1 2 1 2 1 0 3 2 0 3 2 1 2

now question is simple but if we notice that if we check for 3 and 1,2 differently
then we can notice that the answer is wrong
as for eg
2 3 1 3 2 2 3 2...
now in first step->2 3 1 3 2 0 3 2
in second step -> 2 1 1 2 2 0 3 2
in third it becomes -> 2 1 0 2 0 0 3 2
which is quite wrong is in second step 2 1 (1->0)it becomes zero and thus
3 at the next place of it shouldn't change but it's changing that's why this
way is wrong :) */