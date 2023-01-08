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
        int arr[27] = {0};
        int n, check = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int i = 0; i < s.length(); i++)
            {
                int x = s[i] - 97;
                arr[x]++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] % n != 0)
            {
                cout << "NO\n";
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            cout << "YES\n";
        }
    }
    return 0;
}
/*logic is very simple we are to check whether the total numbers
of a distinct character is perfectly divisible by n or not if it is divisble
by n then we keep on adding that number to the each string and it is the only
possible way by which we can make all the strings same and if arr[i]%n!=0 then it means
all strings cannot have same character :)*/