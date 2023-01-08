#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll v[n],sum[n+1],sortsum[n+1];
    sum[0] = 0;
    sortsum[0]=0;
    for (ll i = 0; i < n; i++)
    {
    cin>>v[i];
    sum[i+1]=sum[i]+v[i];
    }
    sort(v,v+n);
    for (int i = 0; i < n; i++)
    {
        sortsum[i+1] = sortsum[i]+v[i];
    }
    int m;
    cin>>m;
    for (ll i = 0; i < m; i++)
    {
        ll type,l,r;
        cin>>type>>l>>r;
        if (type==1)cout<<sum[r]-sum[l-1]<<"\n";
        else cout<<sortsum[r]-sortsum[l-1]<<"\n";
    }
    return 0;
}
/*problem is all about execution of code 
we need to find the sum of n numbers of the normal array 
then we need to find the sum of n numbers of the sorted array
and we are to check the type and then answer accordingly :)*/