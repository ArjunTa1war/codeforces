#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int ans = 0;
    int x = min(n,m);
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            if (i * i + j == n && j * j + i == m)
            {
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}
/*we are to check the condition where x*x + y = n && y*y+x = m
and we are to check the total number of pairs for it
and we are taking the loops till min(n,m)as
in x*x + y = n here y should not be greater then n and x also must not
be greater than n 
in other case(y*y+x = m) we can check that y should not be greater than m
and x also should not be greater than m so we have taken minimum of them :)*/