#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans = 0;
    cin >> n;
    while (n)
    {
       int x = n%2;
       if (x%2!=0)
       {
           ans++;
       }
       n = n/2;
    }
    cout<<ans;
    return 0;
}
/*as we go on dividing 400 like this
400 = 2(200)
200 = 2^2(100),2^3(50),2^4(25),2^4(24 + 1) => 2^5+2^4 where 2^4 is counted as one and thus this series
goes on*
explaination
first we add certain amout of bacteria on first day it will go on doubling in the form of 2^n 
we are just to find the cloasest lowest number to x so that it will be couned as one then the rest
the same thing happens for the rest and thus the series goes on :) */