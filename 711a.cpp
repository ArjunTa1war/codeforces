#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,check = 0;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i][0] == 'O' && s[i][1] == 'O')
        {
            s[i][0] = '+';
            s[i][1] = '+';
            cout<<"YES\n";
            check = 1;
            break;
        }
        if (s[i][3] == 'O' && s[i][4] == 'O')
        {
            s[i][3] = '+';
            s[i][4] = '+';
            cout<<"YES\n";
            check = 1;
            break;
        }
    }
    if (check == 0)
    {
        cout<<"NO\n";
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<"\n";
    }
    return 0;
}
/*we are just to check the seats like this XX|OO or OO|XX where we can
get to OO on the same side we are just to replace OO with ++ that's all
and break as we are just to add 2 peoples not more than that
if no such occurence is there then print no :)*/