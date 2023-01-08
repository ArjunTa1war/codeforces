#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, p1 = 0, p2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, c;
        cin >> m >> c;
        if (m > c)
            p1++;

        else if (m < c)
            p2++;
    }
    if (p1>p2)
    {
        cout<<"Mishka";
    }
    else if (p2>p1)
    {
        cout<<"Chris";
    }
    else if (p1 == p2)
    {
        cout<<"Friendship is magic!^^";
    }
    return 0;
}
/*explaination
find the number of time p1 won(mishka),then check for p2 (chris) now check which is maximum*/