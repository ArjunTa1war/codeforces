#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int r[n + 1];
        r[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin>>a;
           r[i] = a +r[i - 1];
        }
        int m;
        cin >> m;
        int b[m + 1];
        b[0] = 0;
        for (int i = 1; i <= m; i++)
        {
          int a;
          cin>>a;
          b[i] = a + b[i - 1];
        }
        int ans = 0;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                ans = max(ans, r[i] + b[j]);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/*question is simple we are just to take the r and b in order 
and keep on checking like b[0]+r[1],b[0]+r[2]............b[1]+r[0]....
where b[i] is the sum of b[0]+b[1].......b[i]and same for r[i];
and check the maximum number and this is the approach :)*/