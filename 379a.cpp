#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,count = 0 ;
    cin>>a>>b;
    int i = 1;
    while (a)
    {
        a = a - 1;
         count++;
        if (i % b== 0)
        {
            a= a + 1;
        }
        if (a == 0)
        {
            break;
        }
       i++;
    }
    cout<<count;
    return 0;
}
/*after the burning of m candles 1 candle is made
so when m candle burn add 1 to n:)*/