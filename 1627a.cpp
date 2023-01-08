#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
 int n,m,r,c,ans=-1;
 cin>>n>>m>>r>>c;
 char a[n][m];
 for (int i = 0; i < n; i++){
     for (int j = 0; j < m; j++){
         cin>>a[i][j];
         if (a[i][j]=='B')ans=0;
     }
 }
 if (ans==-1){
    cout<<-1<<"\n";
    return;
 }
 if (a[r-1][c-1]=='B'){
     cout<<0<<"\n";
     return;
 }
 ans = 2;
 for (int i = 0; i < m; i++)
 {
     if (a[r-1][i]=='B')ans=1;
 }
 for (int i = 0; i < n; i++)
 {
     if (a[i][c-1]=='B')ans=1;
 }
 cout<<ans<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*there can be just 4 answers possible
-1 when there is no black cell
0 when the cell at the given row and column is black
1 when any other cell in the row or column of the cell is black
2 max possible answer :)*/