#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,ma=0,ans=0;
    cin>>n>>m;
    int arr[n];
    for (int i = 1; i <= n; i++)cin>>arr[i];
    for (int i = 1; i <=n; i++)
    {
        int a = arr[i]/m;
        if (arr[i]%m!=0)a++;
        if (a>=ma)  ans=i;
        ma = max(ma,a);
    }
    cout<<ans<<"\n";
    return 0;
}
/*this question is all about the number's location which requires most
number of m and if i and i+1 requires same number of m then i+1 is at the last
position and this is the required solution 
we are just to find the position of max ceil(a[i]/m) :)*/