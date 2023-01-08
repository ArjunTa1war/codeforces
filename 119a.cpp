#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, n;
    cin >> a >> b >> n;
    while (1)
    {
        if (n == 0)
        {
            cout << 1;
            break;
        }
        n = n - gcd(a, n);
        if (n == 0)
        {
            cout << 0;
            break;
        }
        n = n - gcd(b, n);
    }
    return 0;
}
/*if n becomes 0 in the turn of a  that is simon then simon loses and print 1 and in the other
case then print 0 i.e simon wins , now we need to keep on substracting the gcd(a,n) and then gcd(b,n)
where n becomes 0 at that postion the player will lose :)*/