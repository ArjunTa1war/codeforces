#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll arr[n],neg = 0,ans=0,zero=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
        ans+=abs(abs(arr[i])-1);
        if (arr[i]<0) neg++;
        if (arr[i]==0)zero++;
    }
    if (neg%2!=0&&zero==0)  ans+=2;
    cout<<ans<<"\n";
    return 0;
}
/*logic is simple we are to make the product of the digits equal to one
we know that if -1 is present in even numbers then we can use them otherwise
we need to make one -1 to 1 which will take 2 steps 
and for others we need to make them 1 and this is the required solution :)*/