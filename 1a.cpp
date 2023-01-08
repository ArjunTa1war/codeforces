#include <iostream>
using namespace std;

int main()
{
    int long long n, m, a;
    cin >> n >> m >> a;
    int long long l ,b;
    l = n/a;
    if (n%a!=0)
    {
        l++;
    }
    b = m/a;
    if (m%a != 0)
    {
        b++;
    }
   cout<<l*b;
    return 0;
}