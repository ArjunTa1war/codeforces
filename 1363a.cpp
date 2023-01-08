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
        int n, x;
        cin >> n >> x;
        int arr[n], odd = 0, even = 0, ans = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 != 0)
                odd++;
            else
                even++;
        }
        if (odd==0)
        {
            cout<<"NO\n";
            continue;
        }
        for (int i = 1; i <= odd; i+=2)
        {
            if (ans+2<=odd&&ans+2<=x)
            {
                ans+=2;
            }
        }
        if ((x-ans)<=even)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
/*logic is simple we are to add odd numbers such that we can utilize all odd numbers
and all odd numbers should be present the odd series like we are to keep on adding 2 odd numbers
after 1 as if the odd numbers are present in the odd numbers then only the sum of the elements will
be odd and now after we utilize all the odd numbers we are to check whether the number of even integers
are enough that we can reach c or not and here the case will be (x-ans)<=even if this happens
than cout yes as the number of odds present in  the series of x is also odd in number :)*/