#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int j = 0;
    if (s[0]=='9')
    {
        cout<<9;
        j = 1;
    }
    for (int i = j; i < s.length(); i++)
    {
        if (s[i]=='5')cout<<4;
        else if (s[i]=='6')cout<<3;
        else if (s[i]=='7')cout<<2;
        else if (s[i]=='8')cout<<1;
        else if (s[i]=='9')cout<<0;
        else cout<<s[i];
    }
    return 0;
}
/*the question is simple we just need to convert the number to lowest possible number
by using the step 9-n to any specific digit but we need to check that if the number
at the starting is 9 then we cannot change it as no number starts with 0 :)*/ 