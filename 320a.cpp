#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    if (s[0]!='1')
    {
        cout<<"NO\n";
        exit(0);
    }
    for (int i = 0; i < s.length(); i++)
    {
       if (s[i]!='4'&&s[i]!='1')
       {
         cout<<"NO\n";
         exit(0);
       }
       if (s[i]=='4'&&s[i+1]=='4'&&s[i+2]=='4')
       {
           cout<<"NO\n";
           exit(0);
       }
    }
    cout<<"YES\n";
    return 0;
}

/*we can only use the digits 1,14,144 to make the digits
we here can see that the numbers must contain the digits either  4 or 1
and the number must always start from 1 and no more than 2 4's can occur in a series
so this is my approach :)*/