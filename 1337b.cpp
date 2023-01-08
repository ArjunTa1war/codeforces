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
        int x, n, m;
        cin >> x >> n >> m;
        while (n--)
        {
            if (x < 20)
            {
                break;
            }

            x = (x / 2) + 10;
        }
        if (x - (m * 10) <= 0)
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
/*explaination
we can use atmost n and m
if we use n then it will convert x to (x/2)+10 if we use m then it will reduce the x the to
x-10 now by simple observation we can conclude that if the number is larger then n/2 will effect
alot if the number is smaller then reducing 10 from it matters alot so we are to decrease x to 
as much as possible thats why first we will use n if x becomes less then 20 then it will no longer
get decreased as (less then(20)/2)+10 will always return more than 20 like 15 will give (15/2)+10 = 10
so that is the case now if the while loop gets over we are to check whether x-m*10 making it less
 than 0 or not if yes then cout yes otherwise no :)*/