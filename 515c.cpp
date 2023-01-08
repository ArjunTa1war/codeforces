#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int two=0,three=0,five=0,seven=0;
    for (int i = 0; i < n; i++)
    {
      int a = s[i]-48;
      if (a==2)two++;
      else if (a==3)three++,two++;
      else if (a==4)three++,two+=3;
      else if (a==5)five++;
      else if (a==6)five++,two++,three++;
      else if (a==7)seven++;
      else if (a==8)seven++,two+=3;
      else if (a==9)seven++,two+=3,three+=2;
    }
    two = two-three;//three number of twos will be taken by 3 to make 3!
    for (int i = 0; i < seven; i++) cout<<7;
    for (int i = 0; i < five; i++) cout<<5;
    for (int i = 0; i < three; i++) cout<<3;
    for (int i = 0; i < two; i++) cout<<2;
    cout<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*we are just to maximize the number of digits 
so here we can do one thing 
that is find the numbers x1,x2,,,,,such that a! = x1!*x2!...
and we can notice that 5! and 7! cannot be converted into this
and others can be coverted into 2 and 3 too
so here we are to use all three too...
so we make it  3! by taking up three number of two's
and rest of the 2's will be converted to 2! and we
are to print number of 7! then 5! then 3! then 2! :)*/