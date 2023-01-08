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
        int n,k;
        cin>>n>>k;
        if (k<n)
        {
            int x = n/k;
            if (n%k!=0)
            {
              x = x+1;
            }
            k = k*x;
        }
        int ans = (k/n);
        if (k%n==0)
        {
            cout<<ans<<"\n";
        }else
        {
            cout<<ans+1<<"\n";
        }
    }
    return 0;
}
/*we are to find the max min number in the array
in order to do that we need to find the ceil(k/n)
but if k<n then we need to find the min x*k such that
it is greter than n now k becomes greter than n we can apply the
operation and  the ans becomes 
k/n if (k%n)==0 than all the members in array will be same
and thus no need to add 1 :)*/