#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int l = str.length();
    for (int i = 0; i < l; i++)
    {
        int first = str[i] - 48;
        int num1 = first;
        if (num1%8==0)
        {
            cout << "YES\n"<< num1<<"\n";
            return;
        }
        for (int j = i+1; j < l; j++)
        {
            int second = str[j] - 48;
            int num2 = first * 10 + second;
            if (num2 % 8 == 0)
            {
                cout << "YES\n" << num2<<"\n";
                return;
            }
            for (int k = j+1; k < l; k++)
            {
                int third = str[k] - 48;
                int num3 = first * 100 + second * 10 + third;
                if (num3 % 8 == 0)
                {
                    cout << "YES\n" << num3<<"\n";
                    return;       
                }
            }
        }
    }
    cout << "NO\n";
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
    int t = 1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*if we observe then we can notice that all multiples of 8 can be in the form of
3 or 2 or 1 digts because any number divisible by 8 and greater than 3 digts then 
it's last 3 digits are obviously divisible by 8 
8*125=1000 and after that last 3 digits will be repeated :)*/
