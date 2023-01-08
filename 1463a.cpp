#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum=a+b+c;
    int l = sum/9;
    if (a<l||b<l||c<l) {
        cout<<"NO\n";
        return;
    }
    if (sum%9==0)cout<<"YES\n";
    else cout<<"NO\n";
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
/*we are to observe that in every 7th shot
health of all three monsters will decrease so we can 
notice one thing that is from shot 1-6 1 damage 
will be done and at 7th shot 3 damage will be done and at
that place health of any monsters should not be 0
now after 7 shots health reduced will be 9
and it is clear that if we want to kill every monster at
7th shot sum of health should be multiple of 9
now the minimum element among a,b,c should be the number
of times enhanced shot is used that is sum/9 :)*/