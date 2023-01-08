#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin>>s;
        int x=0,y=0,ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]=='1')
            {
                x = i;
                break;
            }
        }
        for (int i = s.length()-1; i >=0; i--)
        {
            if (s[i]=='1')
            {
                y = i;
                break;
            }
        }
        for (int i = x; i < y; i++)
        {
            if (s[i]=='0')
            {
                ans++;
            }  
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/*we are to make all 1's continuous so in order to do that we are to remove
all zeros between 1st occurence of 1 and last occurence of 1
and that will be the answer :)*/