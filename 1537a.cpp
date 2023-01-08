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
        int arr[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum >= n)
        {
            cout << sum - n << "\n";
        }
        else
        {
            cout << 1<<"\n";
        }
    }
    return 0;
}
/*we are just given an array and we are to make it's mean equal to one
if the sum of all the arrays in negative then we can add 1 postive number in it
such that the sum of the arrays become equal to the terms
now if the sum  of the array is postive best approach is to keep on adding 0 to the
array and let to number in arrays to increase in this way we are just to make 
sum(arr) = number of terms that's all :)*/