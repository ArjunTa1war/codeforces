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
        int a, b, c, n;
        cin>>a>>b>>c>>n;
        int m = max(max(a, b), c);
        int check = m - a + m - b + m - c;
        if (n < check)
        {
            cout << "NO\n";
            continue;
        }
        n = n - check;
        if (n % 3 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
/*we will first equalise the money of a,b,c and then we will find whether the
rest of the money that is n is divided by 3 completely or not if yes 
then it is fair and if not then print no :)*/