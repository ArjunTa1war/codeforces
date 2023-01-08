#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (abs(a - b) > 1 || a + b > n - 2)
    {
        cout << "-1\n";
        return;
    }
    if(a==0&&b==0){
        for (int i = 1; i <= n; i++)cout<<i<<" ";
        cout<<"\n"; 
        return;
    }
    if (a > b){
        for (int i = 1; i <= a; i++)  cout << i << " " << (n - i) + 1 << " ";
        for (int j = n-a; j >=a+1; j--) cout << j << " ";
        cout << "\n";
        return;
        //in the form of 1,n,2,n-1 .......so on..
    }
    if (b > a){
        for (int i = 1; i <= b; i++) cout << (n - i) + 1 << " " << i << " ";    
        for (int j = b + 1; j <= n - b; j++)cout << j << " ";
        cout << "\n";
        return;
        //in the form of n,1,n-1,2 .....so on ..
    }
    if (a == b){
         for (int i = 1; i <=a+b; i+=2)cout<<i+1<<" "<<i<<" ";
         for (int i = a+b+1; i <= n-2; i++)cout<<i<<" ";
         cout<<n<<" "<<n-1<<"\n";
         //in the form of min-max-min.....maxin the end
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
/*so here we are to create exact a maxima and exact b minima
lr = large number ls = less number
if(a>b) that is maxima is more then we can write it as
ls lr ls lr ls lr n n-1 .... ls+1.
if(b>a)that we can write it like
lr ls lr ls lr ls ls+1,ls+2..........n;.
if(a==b)then we can write it like
lr ls lr ls............n,n-1(one more maxima made) 
and for abs(maxima-minima)can never be more than 1 :)*/