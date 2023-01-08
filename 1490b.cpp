#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int x = n / 3;
        int ans = 0;
        int c0 = 0, c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 3 == 0)
                c0++;
            else if (a % 3 == 1)
                c1++;
            else if (a % 3 == 2)
                c2++;
        }
       if (c0==x&&c1==x)
       {
           ans = 0;
       }
       else if (c0>x&&c1>x) {
           ans+=(c1-x)+2*(c0-x);
       }
       else if (c0>x&&c2>x) {
           ans+=(c0-x)+2*(c2-x);
       }
       else if (c1>x&&c2>x) {
           ans+=(c2-x)+2*(c1-x);
       }
       else if (c0>x) {
           ans+=(x-c1)+2*(x-c2);
       }
       else if (c1>x) {
           ans+=(x-c2)+2*(x-c0);
       }
       else if (c2>x) {
           ans+=(x-c0)+2*(x-c1);
       }
       cout<<ans<<"\n";
    }
    return 0;
}
/*acc to question we are to equalize the numbers c0,c1,c2 that is the remainder
when divided by 3 in order to that we can notice that c0 should be n/3 which is same
as c1,c2  if these are not same we can add 1 to any one of them 
and adding one will result in one move we can add 1 to same number twice also
so conditions are made and we can find the minimum number of moves
to make it a array with balanced remainder :)*/