#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, x;
    cin >> n >> x;
    ll total = x, ans = 0;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        ll d;
        cin >> d;
        if (c == '+')
            total += d;
        else
        {
            if (total >= d)
                total -= d;
            else
                ans++;
        }
    }
    cout << total << " " << ans;
    return 0;
}
/*if the sign is + then we keep on adding d to the x if the char is - 
then if we have that many icecream in hand then we can give those icecreams to
the kid otherwise the kid will go away distressed
we are to find the number of distressed children and total icecreams left :)*/