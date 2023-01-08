#include <iostream>
using namespace std;

void solve()
{
    int n, ans = 1e9;
    cin >> n;
    string s;
    cin >> s;
    for (int j = 0; j < n - 1; j++)
    {
        if (s[j] == 'a')
        {
            int a = 0, b = 0, c = 0, count = 0;
            for (int i = j; i < 7 + j; i++)
            {
                if (i < n)
                {
                    if (s[i] == 'a')a++;       
                    else if (s[i] == 'b')b++;
                    else if (s[i] == 'c')c++;       
                    count++;
                    if (a > b && a > c && count >= 2)
                    {
                        ans = min(ans, count);
                        if (ans == 2)
                        {
                            cout << 2;
                            return;
                        }
                    }
                }
            }
        }
    }
    if (ans == 1e9)cout << -1;  
    else cout << ans;     
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
        cout << "\n";
    }
    return 0;
}
/*now we can observe that the length of the answer can never be above 7
all possilbe answers are
aa,aba,aca,abca,acba,abbacca,accabba any other substring will contain 
these only and thus no possible answer other than this :)*/