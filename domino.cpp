#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
           if (s[i]=='U')
           {
               cout<<'D';
           }
           else if (s[i]=='D')
           {
               cout<<'U';
           }
           else
           {
               cout<<s[i];
           }
        }
        cout<<"\n";
    }
    return 0;
}