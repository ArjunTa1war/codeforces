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
        int arr[n];
        int neg=0,zero=0,sum=0,ans=0;
        for (int i = 0; i < n; i++)
        {  cin>>arr[i];
           if (arr[i]==-1)neg++;
           else if(arr[i]==0)zero++;
           sum+=arr[i];
        }
        ans = zero;
        sum = sum+zero;//now product is not zero;
       if (sum==0)
       {
           if (neg==n)ans+=2;
           else ans+=1;
       }
       cout<<ans<<"\n";
    }
    return 0;
}
/*we are to make the array such that sum and product of all the elements in an array is 
not equal to 0 so first of all make all 0 to 1 in this way product can never be 0
in other case we need to take care of the sum if sum ==0
then we need to add 1 to any one of the element but here we need to check
that if all elements are -1 then if we add 1 then it becomes 0 and hence product becomes 0
hence in that case we need to add 2 else 1 
so this is the best approach :)*/