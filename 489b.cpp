#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, count = 0;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cin >> m;
    int g[m];
    for (int i = 0; i < m; i++)
    {
        cin >> g[i];
    }
    sort(b, b + n);
    sort(g, g + m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(b[i] - g[j]) <= 1)
            {
                g[j] = 104;
                count++;
                break;
            }
        }
    }
    cout << count<<"\n";
    return 0;
}
/* explanation
we have to find the numbers in such a way that we pick up both so we will find
the numbers in g[j] which are at the difference of 1 from the b[i] so that's all:)
sort is necessary and used g[j] is given any number greter than 101 as the limit
is 100 and 102-100 >=2 thats why condition will not satisfy and 
thus that value will be neglected for the next time*/