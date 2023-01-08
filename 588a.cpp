#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n], b[n], m_in = 1000, total = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    for (int i = 0; i < n; i++)
    {
        m_in = min(m_in, b[i]);
        total += a[i]* m_in;
    }
    cout<<total<<"\n";
    return 0;
}
/*we are to go in order if we find the minimum rate of meat
per kg then for the rest of the days we will buy the meat for
that price :)*/