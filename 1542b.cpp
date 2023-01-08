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
   ll n,a,b;
   cin>>n>>a>>b;
   ll x = 1;
   while (n>=x){
       if(n%b==x%b)return void(cout<<"YES\n");
       x*=a;
       if(a==1)break;
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
/*according to the given condition if we can write any number in the form
of 1+j+j.... upto n and we can multiplay a at any time but if we multily at
any time 1 will definitely be multiplied that is
pow(a,n)*1 +(a^2*j)+ (a*j) now 
we can write a*j = j+j+j... atimes means there is option of adding unlimited j
to the number so we are to consider the one here only and keep on multiplying
a and check wheter we can add n*b so that number can be obtained :)*/