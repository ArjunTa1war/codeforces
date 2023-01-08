#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        ans = n / 10;
        if (n % 10 == 9)
        {
            ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
/*we are to find how many times 9 might have occured at the last point
so we know that in every 10 numbers 9 occurs for 1 time and for eg if the
n = 39 then 9 is occuring for 39/10 i.e 3 times
but it also contains 9 in the end and that is the reason that we need to add
1 to the answer :)*/