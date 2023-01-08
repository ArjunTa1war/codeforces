#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,x;
        cin>>n;
        int arr[n],check[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            check[i] = arr[i];
        }
        sort(check,check+n);
        if (check[0]==check[1])
        {
            x = check[n-1];
        }
        else
        {
            x=check[0];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==x)
            {
                cout<<i+1<<"\n";
                break;
            }       
        }
    }

    return 0;
}
/*explaination
check the number which is different from the given rest of the array
so that differenct number can be either a arr[0] or arr[n-1]if the array
is sorted as it is differ so compare it with the rest of the elemen\ts
and then find the position in the original array where x is located:)*/