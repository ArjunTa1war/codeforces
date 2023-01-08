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
        string s;
        cin>>s;
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
            {
                if(s[i] == 'a')
                {
                    cout << "b";
                }
                else cout << "a";
            }
            else
            {
                if (s[i] == 'z')
                {
                    cout << "y";
                }
                else
                    cout << "z";
            }
        }
        cout<<"\n";
    }
    return 0;
}
/*at odd places of the string that is 1st,3rd,5th (where i is even)
we need to write least alphabet as possible but as a is the least so we
are to write a there but if a is already there we cannot write a there so we
need to write b there and at even place like 2,4 we need to write largest
alphaabet (in terms of ascii) that is z but if z is already present we need to
write y there :)*/