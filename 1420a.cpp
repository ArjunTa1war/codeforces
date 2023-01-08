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
        int n, check = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] >= arr[i - 1])
            {
                cout << "YES\n";
                check = 1;
                break;
            }
        }
        if (check == 0)cout << "NO\n";
    }
    return 0;
}
/*we can sort all the cubes in order if there is atleast 1 arr[i]>=arr[i-1]
as if all digits are in descending order than it need n(n-1)/2 moves to arrange
in ascending but we can use atmost n(n-1)/2 -1 moves so this is the required 
answer :)*/