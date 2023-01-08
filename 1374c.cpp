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
        int n;
        cin >> n;
        string str;
        int ans = 0, b = 0;
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '(')
            {
                b++;
            }
            else
            {
                b--;
            }
            if (b < 0)
            {
                b = 0;
                ans++;
            }
        }
        cout << ans << "\n";
    }   
    return 0;
}
/*we are just to apply a logic that 
if s[i] = ')' then we will have to move it at any cost 
that's why to check it we have taken the case opposite to it
if s[i] = '('then we can first count number of ( in the series and the next find the number of )) in the
series as it will cancel out if number of ) becomes more then add 1 it's kind of remove them
now we know that number of )) will equal to number of(( as given in the question tha's why rest of
) will get attached to that :)
*/