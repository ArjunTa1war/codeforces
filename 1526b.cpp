#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
    int x;
    cin >> x;
    if (x > 1110){
        cout << "YES\n";
        return;
    }
    for (int i = 0; i < 101; i++){
        for (int j = 0; j < 11; j++)
        {
            if (11 * i + 111 * j == x){
              cout<<"YES\n";
              return;     
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
/*this question is based on observation now if we see
till 111 the possibility is that the number is made by using 11 only
now after 111 the possibility is 11x+111y = n;
11*10 = 110 and we can use 111 also now for number>222 we
have possibilities like we can use 
220 that is 11*20;
221 that is using 11*10+110;
222 that is using 2*110
now if we keep on increasing the number then the possibility
becomes 
1100,1101.....1110 now these are 11 numbers and if we are to make
any number in the form of 11+111+11... we can take any number from the
series (1100,1101...1110)such that n-x%11 = 0 :)*/