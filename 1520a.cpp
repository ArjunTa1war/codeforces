#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t, check = 0;
        cin >> t;
        string s;
        cin >> s;
        int arr[125] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != s[i + 1])
            {
                if (arr[s[i]] == 1)
                {
                    cout << "NO"
                         << "\n";
                    check = 1;
                    break;
                }

                if (arr[s[i]] == 0)
                {
                    arr[s[i]]= 1;
                }
            }
        }
        if (check == 0)
        {
            cout << "YES"
                 << "\n";
        }
    }

    return 0;
}

/*explaination
if the same letter are in consecutive order than it is going on the right path
but if the same letter arrives again and it is not at consecutive position then
teacher will have suspicion and hence print no :)*/