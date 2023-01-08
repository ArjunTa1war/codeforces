#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1') one++;
            else zero++;      
        }
     if (zero==0||one==0)cout<<s;
     else for(int i = 0; i <2*s.length(); i++) cout<<i%2;
     cout<<"\n";
    }
    return 0;
}
/*the answer is a simple observation 
we can take any value of k to 2 
if it's 1 by initially then it's okay otherwise we need to write 
a string of10101010 (s is always subsequence of this string)
as it's even and we can observe that here k = 2
and any string can be made like this so this is the best approach :)*/