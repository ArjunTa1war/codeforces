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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (max(a, b) > min(c, d) && max(c, d) > min(a, b))
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
/*logic is lost player must have the low points then the  max of other two player with whom he was not 
playing as if this not happens then he is at the 2nd position in the whole table and will not be 
able to play final as he lost to first ,thus it will be 
unfair as the player with most points must be in the finals :)*/