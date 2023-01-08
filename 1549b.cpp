#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, ans = 0;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++)
        {
            if (s2[i] == '1' && s1[i] == '0')
            {
                ans++;
                s1[i] = '2'; // just to differentiate it from others
                s2[i]='5';//empty
            }
        }
        if (s2[0] == '1' && s1[0] == '1' && s1[1] == '1')
        {
            ans++;
            s1[1] = '2';
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (s2[i] == '1')
            {
                if (s1[i - 1] == '1')
                {
                    ans++;
                    s1[i - 1] = '2';
                }
                else if (s1[i + 1] == '1')
                {
                    ans++;
                    s1[i + 1] = '2';
                }
            }
        }
        if (s2[n - 1] == '1'&&s1[n-1]!='0'&& s1[n - 2] == '1')ans++;
        cout << ans << "\n";
    }
    return 0;
}
/*it is just a simple chess game first we are to check the number
of empty spaces in front of a pawn and add it to answer
then check it for 1st pawn of course the space in front of it might
be covered with opponent pawn that's why it can move diagonally only
if pawn reaches at the end of opponents place then name that space as 2
just to differentiate it from others and then we need to check it for
last pawn and calculate the answer :)*/