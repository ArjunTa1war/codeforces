#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int difference = abs(s1[i] - s2[i]);
        ans += min(difference, 10 - difference);
    }
    cout << ans << "\n";
    return 0;
}
/*explaination
we are just to find the difference between the 1st digit of s1 and
s2 and than for the 2nd digit and so on
as we can go from 0,1,2,3,4,5,6,7,8,9 last to 1st and 1st to
last so we are to find the minimum of them :)*/