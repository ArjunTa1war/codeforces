#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a += x;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        b += x;
    }
    for (int i = 0; i < n - 2; i++)
    {
        int x;
        cin >> x;
        c += x;
    }
    cout << a - b << "\n"
         << b - c << "\n";
    return 0;
}
/*we are just to find the number that is in a but not in b 
thats why find the sum and substract and then in the second case
we are just to find the term that is in b but not in c :)*/