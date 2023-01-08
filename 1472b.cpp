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
        int n, one = 0, two = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                one++;
            else
                two++;
        }
        if (one == 0 && two % 2 == 0)
            cout << "YES\n";

        else if (one % 2 == 0 && one > 0)
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
we are to equalise the weght 
now it can be done 
if number of occurence of 1 is 0 then no worry
just check for number of two
if one is occured more than one time we need to check
whether that sum is even or not because here the value of
2 is not effected as the total sum will be even and thus
can be divided between two of them :)
for eg if number of 1 is 6 and number of 2 is 1 then both 
can have 4 ,4 weigts :)*/