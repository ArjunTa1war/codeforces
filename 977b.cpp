#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans = 0;
    cin>>n;
    string s,final;
    cin>>s;
    for (int i = 0; i < n-1; i++)
    { int res = 0;
        for (int j = 0; j < n-1; j++)
        {
            if (s[j] == s[i]&&s[j+1]==s[i+1])
            {
                res++;
            }
        }
        if (res>ans)
        {  ans = res;
           final = string(1,s[i])+string(1,s[i+1]);
        }
    }
    cout<<final<<"\n";
    return 0;
}
/*explaination we are to find two consective characteres which makes a substring a
and that a is occuring the most time 
ans the string(1,s[i])means that we are making string by character and the size
of the string is 1 :)*/