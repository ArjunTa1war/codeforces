#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

ll cntsum (ll s){
    ll sum = 0;
    while (s){
        sum+=(s%10);
        s/=10;
    }
    return sum;
}

void solve(){ 
  ll num,s,ans=0;
  cin>>num>>s;
  for (int i = 0; i < 19; i++){
     if(cntsum(num)<=s)return void(cout<<ans<<"\n");
     ll div = pow(10,i+1);
     ll rem = div-num%div;
     num+=rem;
     ans+=rem;
  }
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
/*the question is quite simple we are just to use the approach that we are to keep on 
making the last digit of the number as the zero as it takes least number of steps
and we are to keep on adding the answer and when the sum of digit becomes lesss
than equal to the given value of s then return the answer :)*/
