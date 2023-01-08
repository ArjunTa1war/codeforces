#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m = 0, ans = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
       if (arr[i]<arr[i+1])
       {
           ans++;
       }
       else
       {
         m =max(m,ans);
         ans = 1;
       }
    }
    ans = max(m,ans);
    cout <<ans<< "\n";

    return 0;
}
/*we are just to find the maximum length of subarray where the next digit is strictly
greater than the first one we have started from ans = 1 as if no condition is correct than
the max length is 1 :)*/