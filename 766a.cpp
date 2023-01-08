#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,t;
    cin>>s>>t;
    int a = s.length();
    int b = t.length();
    int ans=0;
    if (s==t)ans = -1;
    else ans = max(a,b);
    cout<<ans;
    return 0;
}
/*it is quite obvious that the string of greater length is the subsequence of one
but not of the other but if the both strings are same then the answer is -1
as there will be no string satisfying the condition :)*/