#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    int n;
    cin >> n;
    int cup = a1 + a2 + a3;
    int medal = b1 + b2 + b3;
    int x = (cup) / 5;
    if (cup % 5 != 0)
        x++;
    int y = (medal) / 10;
    if (medal % 10 != 0)
        y++;
    if (x + y > n)
    {
        cout << "NO\n";
    }
    else
        cout << "YES\n";
    return 0;
}
/*all a's are prize cups and all b's are prize medals now a single shelf cannot contain
both and one shelf can contain atmost 5 cups and 10 medals not more than this
now there are n shelf
so for placing each cups number of shelf will be ceil(all a/5)
for placing each medal number of shelf will be ceil (all b/10);
so if the total is greater than n then cout no other wise yes :)*/ 