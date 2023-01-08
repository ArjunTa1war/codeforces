#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int check = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i]=='0'&&s[i-1]=='1'){
                check=1;
                break;
            }
        } 
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='0')cout<<s[i];
            else break;
        }
        if (check==1)cout<<0;
        for (int i = n-1; i >=0; i--)
        {
            if (s[i]=='1')cout<<s[i];
            else break;
        }
        cout<<"\n";
    }
    return 0;
}
/*to make any string clean it means making it as small as possible
now the condition is if there is 10 then we can make it to 1 or 0
but if there is 01 then we cannot change it means that number of 
continuous 0 in the beginning and number of continuous 1 in the end
are never gonna change
and other then that we can make any number to 0
suppose it's 111110 then also we can make it 0
it's 111000000 we can make is 0 to by doing like this
11100000 -> 1110000 -> 111000 -> 11100 -> 1110 ->110.....and 0 :)*/