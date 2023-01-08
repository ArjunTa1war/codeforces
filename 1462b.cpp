#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s[n - 4] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
        {
            cout << "YES\n";
        }
        else if (s[0] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
        {
            cout << "YES\n";
        }
        else if (s[0] == '2' && s[1] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
        {
            cout << "YES\n";
        }
        else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n - 1] == '0')
        {
            cout << "YES\n";
        }
        else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
        {
            cout << "YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}
/*we just need to check that can 2020 be extracted from the given string such that
we can remove atmost 1 continuous substring from the given string
it can be done only if the 2020 is present either at the first or last positioins
as if 2020 is present in the middle then we need to remove two substrings and the answer
will be no that is why we need to check how the 2020 can be possible in either first or last 
positions :)*/