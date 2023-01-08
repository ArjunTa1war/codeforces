#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << "FastestFinger\n";
        return;
    }
    if ((n & 1) || n == 2)
    {
        cout << "Ashishgup\n";
        return;
    }
    n /= 2;
    if (n & 1) {
        for (int i = 2; i * i <= n; i++){
            if (n % i == 0){
                cout << "Ashishgup\n";
                return;
            }
        }
        cout << "FastestFinger\n";
    }
    else{
        while (n){
            n/=2;
            if(n&1 &&n!=1){
                cout<<"Ashishgup\n";
                break;
            }
            if(n==1){
                cout<<"FastestFinger\n";
                break;
            }
        }      
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
/*now if we observe 
Fastest finger will win in three conditions only that is
if n = 1 //ashish will have no move..
if n = 2*prime //ashish will two options only that is dividing it by
prime number that is odd or subtracting it by 1 in both case fastfinger wins..
if n = 2^x //ashish will not have any option other than subtracting one
and thus fastest finger wins....
in all other cases ashishgup wins as if any number comes
if it is odd he will divide it by odd and thus wins
and if any even number comes then he will look for all odd divisors of
that number and thus ff is left with  even number only
for eg if the number is 36 he will divide it by 3*3 = 27 now
fast finger is left with 4 and thus he loses but if condition comes that
fast finger is left with 2 then we are to keep atlest one other numbre also
and this is the best approach :)*/