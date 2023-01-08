#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + c) % 2 == 0){
        int s = (a + c) / 2;
        if (s%b == 0){
            cout << "YES\n";
            return;
        }
    }
    int c1 = 2 * b - c;
    int c2 = 2 * b - a;
    if (c1 % a == 0 && a<=c1 || c2 % c==0&& c<=c2){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*we are just to satisfy the condition of arithmatic progression
that is b = (a+c)/2 that is arithmetic mean
now we are to check for the condition of b
that is check whether b can be changed to b+c/2 or not
then check for 2*b-c and 2*b-a and check whether we can make
a = 2*b-c or not and same for other :)*/