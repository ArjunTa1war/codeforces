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
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int l=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i]!=s[i+1])l++;
        }
        a = a*n;
        l = (l/2)+1;
        if (b>=0)cout<<a+(b*n)<<"\n";
        else cout<<a+(b*l)<<"\n";
    }
    return 0;
}
/*question is all based on b
it is quite obvious that a is mulitplied with n at any cost
as  ans = a(l1)+a(l2)+a(l3)....+b+b.......
a(l1+l2+l3)...+b+b+b where l1+l2+l3 = n that is total length
now we need atleast l b's as there is no other option acc to quetion
now if we observe the given string
if in between 101 we delete 0 then 11 will become continuous
if in between 10101 we delete 2 0 then 111 will become continuous
and so on and the result becomes (l/2)+1 so we just need to apply
this approach to the question :)*/ 
