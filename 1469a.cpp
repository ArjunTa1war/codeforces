#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin>>s;
        int x= s.length();
        if (x%2!=0||s[0]==')'||s[x-1]=='(')
        {
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
    return 0;
}
/*we are given that there are only one (  and only one ) and all others
are ? so here we need to replace ? with ( or ) in order to make it a balanced
string there will be three conditions only the first element should be
( and last should be ) and the string must be even if these condtions get fulfilled
then the balanced string is possible other wise not :)*/