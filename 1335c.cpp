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
        int arr[n];
        for (int i = 0; i < n; i++)cin>>arr[i];
        sort(arr,arr+n);
        int distinct = 1;
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i]!=arr[i+1])distinct++;
        }
        int same = 1;
        for (int i = 0; i < n-1;i++)
        {   int ans = 1;
            while (i<n-1&&arr[i]==arr[i+1]){
            ans++;
            i++;}
            same = max(ans,same);
        }
       if (same<=distinct)distinct-=1;
       cout<<min(same,distinct)<<"\n";
    }
    return 0;
}
/*so the best approach is to find the number of distinct
integers and then find the longest string of same numbers
so let these be distinct and same
now if we notice distinct is having one from same number too
so if distinct is more than or equal to same then subtract 1 from
distinct suppose the number is 
1 1 1 2 3 then there are 3 distinct numbers and same = 3
but we can not take same player in both the teams that's why
we can make teams like 1 1 1 , 2 3 or 1 1 , 1 2 3 in both cases answer
will be same
if same is more then no issue for eg 1 1 1 3
same = 3,distinct = 2 so we can make teams like 1 1, 1 3 :)*/