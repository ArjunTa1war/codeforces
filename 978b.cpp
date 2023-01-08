#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans = 0;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < n-2; i++)
    {
        if (s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x')
        {
           ans++;
        }   
    }
   cout<<ans;
    return 0;
}
/*we are just to check the number of consecutive x in the series
and total number will be the answer :)*/