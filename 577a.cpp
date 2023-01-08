#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,ans=0;
    cin>>n>>x;
    for (int i = 1; i <= n; i++)
    {
        if (x%i==0&&x/i<=n)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
/*here we are just to find the number of terms where 
i*j can be equal to x and both i and j are the rows and columns 
here n is the no. of rows and coulmns 
so we are just to divide the number of numbers between 1 to n which
divides the x completely
but here i and j are less than n so it becomes the condition that
i*j=x but if we are just going from i to n so i will be within limits
but if x/i becomes greater then n then j will become greater than
n which will not satisfy the conditon :)*/
