#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,a = 0, b = 0;
        cin >> n;
        for (int i = 1; i <= (n / 2) - 1; i++)
        {
            a += pow(2, i);
        }
        a = a + pow(2, n);
        for (int i = n / 2; i < n; i++)
        {
            b += pow(2, i);
        }
        cout<< a-b<<"\n";
    }

    return 0;
}
/*explaination
as we are given a number that is if 6 is given then we are to write 2 upto 2^6
i.e 2,4,8,16,32,64 now we are to add 3 coins to a and other 3 to b 
such that a -b is least thats why we take firsttly the highest number ie 64
and 2 small numbers and the numbers inbetween will be more than half of 64 and the other
thing is simple :)*/