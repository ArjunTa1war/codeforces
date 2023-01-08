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
 map<int,int>mp;
 for (int i = 0; i < n; i++){
    int a;cin>>a;
    mp[a%10]++;
 }
 for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
        for (int k = 0; k < 10; k++){
            int num = i+j+k;
            if(num%10==3){
            mp[i]--,mp[j]--,mp[k]--;
            if(mp[i]>=0&&mp[j]>=0&&mp[k]>=0)return void(cout<<"YES\n");
            mp[i]++,mp[j]++,mp[k]++;
            }
        } 
    } 
 }
 cout<<"NO\n";
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
/*answer is quite simple here we are to add three numbers such that the sum
ends with the digit 3 now it doesnot matter what the number is we are just to 
check the last digits so here we are to store the last digits now there
are total 9 digits possible and now we are to run a nested loop and check
for each sum and then we are to check are there enough values we need for
the answer or not if yes then return yes else continue :)*/