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
        int s;
        cin >> s;
        int x = 0, ans = 0, j = 1;
        while (1)
        {
            x += j;
            ans++;
            if (x >= s)
            {
                cout << ans << "\n";
                break;
            }
            j += 2;
        }
    }
    return 0;
}
/*acc to question we need evey element either one
or for every ai element (ai-2)or(ai-1) should be present in the array
so the best possible array with least number of element 
is 1+3+5+7+9.......and this can be compensated acc to question
if the sum of this series goes above or get equal to the given s then stop
the loop and print the ans :)*/