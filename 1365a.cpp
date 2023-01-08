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
        int n, m, ans = 0;
        cin >> n >> m;
        int arr[51][51];
        int c1[51] = {0}, c2[51]={0};
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 1)
                {
                    c1[i] = 1;
                    c2[j] = 1;
                }
            }
        }
        int r = 0, s = 0;
        for (int i = 0; i <= 50; i++)
        {
            if (c1[i] == 1)
                r++;
            if (c2[i] == 1)
                s++;
        }
        ans = min(n-r,m-s);
        if (ans % 2 == 0)
        {
            cout << "Vivek\n";
        }
        else
        {
            cout << "Ashish\n";
        }
    }
    return 0;
}
/*we are just to find the total number of diffent i's and j's
when we will find all i's then n-i is all position of x where the cells can
be claimed and m-j will be all position of y where the cells can be claimed
and we are to find the intersection of them in order to do that 
we have to find the minimum of them and that will be the answer 
as if one row is vacant and 1 column is present then it is easy to
observe that there will be one such point where the row and column
of that point is unoccupied :)*/
