#include <iostream>
#include <algorithm>
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
        int arr[n+1];
        for (int i = 1; i <= n; i++)  cin>>arr[i];
        int dp[n+1];
        dp[0]=0;
        for (int i = n; i >0; i--)
        {
            dp[i]=arr[i];
            int j = dp[i]+i;
            if (j<=n) dp[i]+=dp[j];
        }
        sort(dp,dp+n+1);
        cout<<dp[n]<<"\n";
    }
    return 0;
}
/*this question is all about the approach 
if we take other approach that is by using two loops it will
give tle 
so the best approach is to do it in one loop
we are to start a loop from the end 
we can realize that if once the number reaches a point it's path
after that will be same whatever the starting point is it will not
matter so  we start from end and keep on updating the values of dp[]
from the end
by doing this we can get a array of all the numbers starting at any point
and we are just to find the max value in the array dp[] :)*/