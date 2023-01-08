#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

ll sum(ll n){
    return n*(n+1)/2;
}
void solve()
{
    ll n,k,ans=0;
    cin>>n>>k;
    string s;
    cin>>s;
    ll arr[27]={0};
    for (ll i = 0; i < k; i++)
    {   char c;
        cin>>c;
        ll a = c-96;
        arr[a] = 1;
    }
    for (ll i = 0; i < n; i++)
    {
        ll a = s[i]-96;
        if (arr[a]>0)s[i]='1';
        else s[i]='0';
    }
    for (ll i = 0; i < n; i++)
    {  ll count = 0;
        while (s[i]=='1'&&i<n){
            count++;
            i++;
        }
       ans +=sum(count);
    }
    cout<<ans<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*it is simple we are find the total number of substring we can make
so total number of substrings for any string will be
1+2+3+...till the length of the string that is n(n+1)/2 now if
we cannot use any character it means that new string will start from that
place and thus we are to find it's substrings and we can easily do it by
replacing every character than we can use by 1 and other by 0 and we are to
find the continuous 1's and find the number of substrings of all :)*/