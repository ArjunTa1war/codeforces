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
        int l = s.length();
        int m=0,count=0;
        for (int i = 0; i < l; i++)
        {
            if (s[i]=='L')count++;
            else
            {
                m = max(count,m);
                count=0;
            }
        }
        m = max(m,count);
        cout<<m+1<<"\n";
    }
    return 0;
}
/*our main task is just to find the length of longest
continuous string of L and we just need to avoid these L
on the way so that's why length+1 is the answer :)*/