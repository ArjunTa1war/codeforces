#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int ans = 0;
    if (s[0]!='a')
    {
        ans+=min(s[0]-'a',26-(s[0]-'a'));
    }
    
    for (int i = 0; i < s.length() - 1; i++)
    {
        int a = s[i];
        int b = s[i + 1];
        ans += min(abs(b - a), 26 - abs(b - a));
    }
    cout << ans << "\n";
    return 0;
}
/*explanation
we can move in anticlockwise direction or the clockwise direction 
but we are to choose minimum distance from going from s[i] to s[i+1]
initially the needle is at 'a' therefore we first need to find the shortest
distance from s[0] from a
as there are 26 letter we can either go from a to last to a to anticlockwise
or from beginning for eg we are to go z from a in clockiwise direction we
can reach there in 25 steps but if we go there in anticocwise way we can reach
there in 26-25 that is in one step :)*/