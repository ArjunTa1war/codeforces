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
        int n, c = 0, w = 0; //c means number of odd x at even places and w means number of x at odd places
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i % 2 == 0 && x % 2 != 0)
            {
                c++;
            }
            else if (i % 2 == 1 && x % 2 != 1)
            {
                w++;
            }
        }
        if (w != c)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << c << "\n";
        }
    }
    return 0;
}

/* explaination
we need to notice that if we divide anything by 2 there can be two remainders that is 0 or 1
and we need to check if i%2 = x%2 than it's correct now for this best approach is
we need to think that at i = even even integer should be there that is x should be there
now approach
check how many even integer are there in the place of odd integer and how many odd are there in place of
even integers if they are equal than answer should be c or w if they are unequal it will return -1 :)*/
