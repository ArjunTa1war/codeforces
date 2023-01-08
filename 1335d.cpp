#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
    vector<string> v(10);
    for (int i = 0; i < 9; i++)cin >> v[i];
    vector<string> temp(v);
    v[0][0] = temp[0][1];
    v[1][3] = temp[1][4];
    v[2][6] = temp[2][7];
    v[3][1] = temp[3][2];
    v[4][4] = temp[4][5];
    v[5][7] = temp[5][8];
    v[6][2] = temp[6][0];
    v[7][5] = temp[7][3];
    v[8][8] = temp[8][6];
    for (int i = 0; i < 9; i++) cout << v[i]<<"\n";

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
/*there are many approaches
first we are to keep in mind that in sudoko
every digit comes once in a single row and column as
well suppose we change 1 by 2 then that row will have
two 2's and that column will also have two 2's and thud condition
is satisfied
but the apporach of mine is move along the row and keep on
changing the number at position v[i][j] by changing by number
condition of one row,one column,one box is accomplished and
we are to change 9 numbers in such way and that's the
approach :)*/