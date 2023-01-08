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
        int n,ans=0;
        cin>>n;
        int arr[n],dp[n];
        for (int i = 0; i < n; i++)cin>>arr[i];
        sort(arr,arr+n);
        for (int i = 0; i < n; i++)
        {   if (i+1>=arr[i])dp[i]=1;
            else dp[i] = 0;
            if (i-arr[i]>=0) dp[i]+=dp[i-arr[i]];
        }
        cout<<*max_element(dp,dp+n)<<"\n";
    }
    return 0;
}
/*we are to start from beginning and check for each and every index
the value of dp[i] states the maximum number of teams that can be
formed before the index i(including i) and then we are to keep on 
checking it for every i
now it is given that the number of exploreres in the team must be
above or equal to explorer's inexperience so we need to check if
i-arr[i]>=0 then add dp[i-arr[i] to it that is the max number of teams
that can me made if we consider the explorer at position i
and keep in mind that if any situation comes such that we cannot take
any explorer then it is quite obvious that the explorer with more
inexperience stay at the camp :)*/