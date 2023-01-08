#include <iostream>
using namespace std;
void solve(){
    int n;
        cin>>n;
        string f,s;
        cin>>f>>s;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='1'&& f[i]=='1')
            {
             cout<<"NO\n";
             return ;
            }
        }
        cout<<"YES\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
      solve();
    }
    return 0;
}
/*acc to question in either of row there should be atleast 1 "0"free cell present 
if this condition is valid for all the columns then cout yes otherwise no :)*/