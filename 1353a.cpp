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
        int n, m;
        cin >> n >> m;
        if (n == 1)
        {
            cout << 0 << "\n";
        }
        else if (n==2)
        {
            cout<<m;
        }
        else
        {
            cout<<2*m;
        }
        cout<<"\n";
    }
    return 0;
}
/*explaination
if n = 1 we can only write in the way [i] so no i+1 element answer is 0
if n = 2 then we can only place in one way i.e [0,m] that's why its answer is m
if n>2 then we can write [0,0,m,0,0,] in this way the abs(0-5)+abs(5-0)
answer would always be 2*m because if hte sum is 5 we can also write [0,2,0,3,0]
and [0,5,0,0,0] both will give out the same sum ;)*/