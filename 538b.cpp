#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define M 1000000007
#define all(v) begin(v),end(v)
using namespace std;

void solve()
{
   int n;
   cin>>n;
   vector<int>cnt(7,0);
   int i = 0;
   while (n){
    cnt[i] = n%10;
    n/=10;
    i++;
   }
   int maxi = *max_element(all(cnt));
   cout<<maxi<<"\n";
   for (int i = 0; i < maxi; i++){
      int num = 0;
      for (int j = 0; j < 7; j++){
          if(cnt[j])num+=(int)pow(10,j),cnt[j]--;
      }
      cout<<num<<" ";
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
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*we are to express the number in the form of addition of number consisiting of 0&1
only and the maximum numbers we need to add is 9 only because we can write every
number digit in the terms of addition of one and no single digit number is greater
than 9 so we are to check the number of 1 needed at certain digit place and thus
we can solve the question for eg
3 2 1 1 can be written as
1 1 1 1
1 1 0 0
1 0 0 0 and thus completed :)*/