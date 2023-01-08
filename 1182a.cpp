#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if (n%2!=0)cout<<0<<"\n";
    else{
        int a = n/2;
        ll ans = pow(2,a);
        cout<<ans<<"\n";
    }
    return 0;
}
/*if the n is odd then we cannot fill the pattern and if the n is even 
then for every n there will be 2*2*2*2 upto n/2 ways as for each 
2n there are 2 options and this is the requred solution :)*/