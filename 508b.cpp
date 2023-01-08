#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n= s.length();
        for (int i = 0; i < n; i++)
        {   int a = s[i]-'0';
            if (a%2==0&&a<s[n-1]-'0')
            {
               char temp = s[i];
               s[i]=s[n-1];
               s[n-1] = temp;
               cout<<s<<"\n";
               return;
            }
        }
        for (int i = n-2; i >=0; i--)
        {   int a = s[i]-'0';
            if (a%2==0)
            {
               char temp = s[i];
               s[i]=s[n-1];
               s[n-1] = temp;
               cout<<s<<"\n";
               return;
            } 
        }
        cout<<"-1\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*as we are given a odd number and we are to first check from the
beginning that is there any number which is even and less than the
last number if it exists we are to swap the digits if there doesn't exist
any even number less than last digit then it is quite obvous that the last
digit must be small so it should be placed at the ending positions that's why
we will run a loop from the end too....
if we are successful to find the even number then cout the string with replaced
digits either cout -1 :)*/