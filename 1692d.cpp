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
   string s;
   cin>>s;
   int x,ans=0;
   cin>>x;
   vector<int>arr(4);
   arr[0] = s[0]-48;
   arr[1] = s[1]-48;
   arr[2] = s[3]-48;
   arr[3] = s[4]-48;
   int n3 = 1440;
   set<vector<int>>st;
   while (n3--){
    if(arr[0]==arr[3]&&arr[1]==arr[2]){
        if(st.count(arr)!=0)break;
        st.insert(arr);
        ans++;
    }
    int hr = arr[0]*10+arr[1];
    int mn = arr[2]*10+arr[3];
    int c = mn+x;
    int d = c/60;
    int e = c%60;
    hr+=d;
    mn = e;
    hr = hr%24;
    arr[1] = hr%10;
    hr/=10;
    arr[0] = hr;
    arr[3] = mn%10;
    mn/=10;
    arr[2]=mn;
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
/*solution to this question is that we are just to find the number of
times the clock time is pallindrome
and here we are not talking about the 24 hrs we are talking about the whole
life there are 1440 different minutes in a day
now we are to keep on checking the pallidrome condition for all the time zones
but if we find that a given time is pallindrome and it is already counted before
then break and output the answer
note:- after 24 hours do hrs%24 :)*/