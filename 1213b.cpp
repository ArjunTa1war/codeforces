#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int arr[n],ans = 0;
        for (int i = 0; i < n; i++)  cin>>arr[i];
        int m = 1e9;
        for (int i = n-1; i >=0; i--)
        {
            if (arr[i]>m)ans++;
            m = min(arr[i],m);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/*we are to find the number of those kind of indices where the price of the mobile
is more then the rest of the series suppose the price is 9 at index 3 if after index 3
to index n there is any price less then 9 then that day is bad and we are to count the
number of bad days :)*/