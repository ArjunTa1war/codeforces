#include <iostream>
#include <string>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
string res_string(string s,int a){
    string res = "";
    int x = a/s.length();
    for (int i = 0; i < x; i++)
    {
        res+=s;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, t;
        cin >> s >> t;
        int ls = s.length();
        int lt = t.length();
        int lcm = (ls*lt)/gcd(ls,lt);
        s = res_string(s,lcm);
        t = res_string(t,lcm);
        if (s==t)
        {
            cout<<s<<"\n";
        }else
        {
            cout<<-1<<"\n";
        }
    }
    return 0;
}
/*logic 
we are to check whehter is it possible to make a string which is
divisible by both the strings in order to do that we will make
a string of length of lcm of these to string
so if the result strings made in both the casess are same then it
mean that x.s=res && y.t = res
and thus cout the result string if these two are not equal then
no such condition is possible :) */