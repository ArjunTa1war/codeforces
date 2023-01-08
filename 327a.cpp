#include <iostream>
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
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int interval_zero = (j-i+1)-(sum[j]-sum[i-1]);
            int one_outside = (sum[n]-sum[j])+sum[i-1];
            ans = max(ans,(interval_zero+one_outside));
        }
    }
    cout << ans;
    return 0;
}
//number of one's = sum[j] - sum[i-1];
// substract the ones from zeroes
/*suppose we take the array a1,.....,ai....aj......an
then the totoal number of zeros will in the interval a[i]and a[j] will be 
= (j-i+1)(total length) - (sum[j]- sum[i-1])
and then comes the rest of the prat that is a1 to ai and then aj to an we will have to
count the total number of 1 in that places 
from a1 to ai the total number of one's would be sum[i-1] and the total number of ones would be
sum[n] - sum[j] :)*/