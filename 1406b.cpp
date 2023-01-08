#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;

void solve()
{
 vector<ll>v;
 ll n;
 cin>>n;
 for (ll i = 0; i < n; i++){
   ll a;
   cin>>a;
   v.push_back(a);
 }
 sort(v.begin(),v.end());
 if (v.back()>0){
    ll ans = v.back();
    ll x = v[0]*v[1]*v[n-3]*v[n-2];
    ll y = v[0]*v[1]*v[2]*v[3];
    ll z = v[n-2]*v[n-3]*v[n-4]*v[n-5];
    cout<<ans*max(x,max(y,z))<<"\n";
 }
 else{
    cout<<v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5]<<"\n";
 }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*well there are two options first is when all the numbers are negative
it will only have negative answer.
if there is atleast one positive number then it is quite abvious we need to
take one positive number and we are to choose 4 other numbers now
for trying for that the answer is positive we will take all positive number
first then 2 negative then 4 negative well it's little bit differnt in answer
but the approach is this as there can we 0 negative numbers also :)*/