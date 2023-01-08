#include <iostream>
#include <string>
using namespace std;
string alphabets = "qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char letter;
    cin >> letter;
    string s;
    cin >> s;
    int a;
    if (letter == 'R')
    {
        a = -1;
    }
    else
    {
        a = 1;
    }
    for (int i = 0; i < s.length(); i++)
    {
       for (int j = 0; j < alphabets.length(); j++)
       {
           if (s[i]==alphabets[j])
           {
               cout<<alphabets[j+a];
           }
       }
    }
    return 0;
}
/*the problem is simple we are to just write the left hand side alphabet of
the given string if the given letter is r as r is where his hands got shifted
and we are to write the right hand side letter of the string if the given 
letter is l or his hands shifted to left side :)*/