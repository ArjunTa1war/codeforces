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
        int n,ans=0;
        cin>>n;
        int arr[100] = {0};
        for (int i = 0; i < n; i++){
            int x;
            cin>>x;
            arr[x]++;
        }
        for (int s = 2; s <= 2*n; s++)
        {
            int total = 0;
            for (int i = 1; i < (s+1)/2; i++)
            {
             if (s-i<=n){
             total += min(arr[i],arr[s-i]);
             }        
            }
            if (s%2==0) total+=arr[s/2]/2;
            ans = max(ans,total);
        }
         cout<<ans<<"\n";
    }
    return 0;
}
/*solution is simple but logical 
here we need to find the max number of teams such that their
total weight is same.....
so we need to take care that no player can be in more than 1 team
now by some observation we can easily get that the max
weight of two player can be 2*n as for any player(w<=n)
so we need to run a loop from 2 to 2*n
and check for each number that how many pairs are possible such
that the total is s we need to find the max number of pairs for any
s if s is even and there are values in s/2 too... then we need to
add arr[s/2]/2(number of pairs) to the total
we are using the loop from 1 to (s+1)/2 as arr[0]=0
and after (s+1)/2 same numbers will be repeated
we need to keep on updating the ans = max(ans,total) :)*/