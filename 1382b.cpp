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
        int n;
        cin >> n;
        int ans = n;
        int r = 0;
        for (int i = 1; i <= n; i++)
        {
            int num;
            cin >> num;
            if (num > 1 &&r == 0)
            {
                ans = i;
                r = 1;
            }
        }
        if (ans%2!=0)cout<<"First\n";
        else cout<<"Second\n";
    }
    return 0;
}
/*the series will go on like this first,second,first,second.....
but if at any iteration the a[i]>1 then at that position 
the player can play optimally and manipulate the game to win :)*/