#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n + 1], sum[n + 1];
    sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum[i] = sum[i - 1] + arr[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        cout << lower_bound(sum, sum + n, q) - sum<< "\n";
    }
    return 0;
}
/*explaiantion
now we are given the number of piles and we are given the number of worms in ith pile
now we are given what is the number of juicy worm we are to start numbering of worms
from 1 and we are just to find the i which pile the qth worm is located
so we we are to just print the indices of the pile where the worm is located 
we are to find the first number when the q becomes equal to or lower than the sum[i]
and we are just to print that index :)
*/