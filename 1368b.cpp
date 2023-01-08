#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
  string s = "codeforces";
  ll k;
  cin>>k;
  ll product = 1;
  int i = 0;
  vector<ll>v(10,1);
  while (product<k)
  {
      product /=v[i];
      v[i]++;
      product*=v[i];
      i++;
      if(i>9)i=0;
  }
  for (int i = 0; i < 10; i++){
      for (int j = 0; j < v[i]; j++){
          cout<<s[i];
      }  
  }
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
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*it is quite simple we are to make sure that the product of the numbers must
be equal or greater so the best approach is like
codeforces  1
ccodeforces 2
ccoodeforces 4
ccooddforces 8 and so one 
we are to keep in mind that in 4*2 extra characters are 3+1=4
but in 2*2*2 extra elements are 1+1+1 = 3that's why we are to keep
the difference between no.of characters atmost one
now we are to keep on adding the characters and checking the product
and thus this is the approach :)*/