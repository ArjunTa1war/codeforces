#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for (ll i = 0; i < t; i++)
    {
        ll n,k;
        cin>>n>>k;
        ll ans = n;
        for (ll i = 1; i*i <= n; i++)
        { 
            if (n%i==0)
            {
                 if (i<=k)ans = min(ans,n/i);
                 if (n/i<=k)ans = min(ans,i);
            }   
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/*question is simple we know that all the multiples of a number are before it's 
square root that's why we need to take every number before it's square root 
and check for i<=k or n/i<=k and keep the answer according to this
so we are to take both the condition because if we take the first case only then all
the numbers between sqrt(n)&n/2 will not be considered and same with the other case :)*/