#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int m = max(a, b);
    m = max(m, c);
    int l = min(a, b);
    l = min(l, c);
    cout << m - l;
    return 0;
}