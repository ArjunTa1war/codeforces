#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int x =s.length();
    for (int i = 0; i < x; i++)
    {
        cout<<s[i];
    }
    for (int i = x-1; i >=0; i--)
    {
        cout<<s[i];
    }
    return 0;
}
/*it is a observation that 
the number in series are 
11,22,33,44,55,66,77,88,99,1001,1111,1221,.......and so on 
now it can be observed that first the number itself is written and
then it is reversed so this is the answer :)*/