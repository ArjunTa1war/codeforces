#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, ans = -1e9;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin>>a>>b;
        if (b > k)
        {
            ans = max(ans, a - (b - k));
        }
        else
            ans = max(ans, a);
    }
    cout << ans << "\n";
    return 0;
}
/*we are to solve according to the question and need to find the max value
of ans for all n pairs :)*/