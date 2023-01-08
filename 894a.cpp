#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int ans = 0;
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        for (int j = i+1; j < l; j++)
        {
            for (int k = j+1; k < l; k++)
            {
                if (s[i]=='Q'&&s[j]=='A'&&s[k]=='Q')
                {
                    ans++;
                }
            }    
        }  
    }
    cout<<ans;
    return 0;
}
/*we just need to check how many QAQ pattern can be formed in order
we can use a single letter to form multiple patterns so for doing this
this is the most effiecient method :)*/