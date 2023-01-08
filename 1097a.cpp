#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    for (int i = 0; i < 5; i++)
    {
        string s2;
        cin>>s2;
        if (s[0]==s2[0]||s[1]==s2[1])
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
/*we are just to check if the first letter of s match with s1
or the second letter of s matches with s1 then yes otherwise no :)*/