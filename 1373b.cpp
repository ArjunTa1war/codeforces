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
        int one = 0, zero = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                one++;
            else if (s[i] == '0')
                zero++;
        }
        int ans = min(zero, one);
        if (ans % 2 == 0)
        {
            cout << "NET"
                 << "\n";
        }
        else
            cout << "DA"
                 << "\n";
    }
    return 0;
}
/*we are just to check the number of possible pairs of 0 and 1
and other things can be done on the basis of question 
a player can choose two different adjacent digits and if a player cannot do this
then the player looses :)*/