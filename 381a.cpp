#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n], s = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int j = 0;
    int r = 1;
    int y = n;
    while (y--)
    {
        if (r == 1)
        {
            s += max(arr[j], arr[n - 1]);
            if (arr[j] > arr[n - 1])
            {
                j++;
            }
            else
            {
                n--;
            }
            r = 0;
        }
        else if (r == 0)
        {
            d += max(arr[j], arr[n - 1]);
            if (arr[j] > arr[n - 1])
            {
                j++;
            }
            else
            {
                n--;
            }
            r = 1;
        }
    }
    cout << s << " " << d;
    return 0;
}
/*explanation
we are to check which is the maximum number among first and last
element of array
we need to check one more thing first check for s
that is s will choose first the number she chooses will be eliminated for the rest of the check 
while loop will go for n turn that is as i am to change y thats why gave the value of n to y
so that is how this code will work */