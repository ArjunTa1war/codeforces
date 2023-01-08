#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='.')
        {
            cout<<0;
        }
        else
        {
            if (s[i]=='-'&&s[i+1] =='.')
            {
               cout<<1;
            }
            else
            {
                cout<<2;
            } 
            i++;
        }   
    }
    return 0;
}
/*Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». 
now if there is just . then cout 0 if the first term is
- then check if the next term is . then cout 1 else there will
be only one case that is - and in that case print 2
as we will take 2 digits that's why i++ that is increase the 
integer by 2 as the 2 digits will be converted to number
:)*/