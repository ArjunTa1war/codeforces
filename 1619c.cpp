#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

void solve()
{
    ull a, s;
    cin >> a >> s;
    vector<int> v;
    while (a||s)
    {   
        int fir = a % 10;
        int sec = s % 10;
        if (sec >= fir){
            v.push_back(sec - fir);
            a /= 10;
            s /= 10;
        }
        else{
            fir = a % 10;
            sec = s % 100;
            int x = sec - fir;
            if (x > 9||x<0)
            {
                cout << -1 << "\n";
                return;
            }
            v.push_back(x);
            a /= 10;
            s /= 100;
        }
    }
    reverse(v.begin(), v.end());
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]>0)count=1;
        if (count==1)cout<<v[i];
    }
    cout << "\n";
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

/*it is quite simple 
a+b = s or
a[i]+b[i] == s[i] || a[i]+b[i] =s[i]s[i-1];
so we are to find b from it it is quite obvious 
that if the sum is less then a
then there must be two numbers of s and a+something
should be greater than a that's why in that case
we will divide the given number by 100 and 10 :)*/