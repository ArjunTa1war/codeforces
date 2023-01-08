#include <iostream>
#include <cmath>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if (n%2==0){
    cout<<n/2<<" "<<n/2<<"\n";
    return;
    }
   int k = 1;
   for (int i = 2; i <=sqrt(n); i++){
      if (n%i==0){
          k=n/i;
          break;
      }
   }
    cout<<k<<" "<<n-k<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*the main task is just to find the largest divisor of the given number
if it's even then it is quite obvious that the largest divisor is
n/2.
if it's odd then we can run a loop from 1 to it's sqrt
and when we find any number such that n%i==0 then k = n/i;
and n-k and k will be the answer
larger the k smaller the n-k and it is quite obvious that
k is the divisor of n then k is also the divisor of n-k 
so the lcm will be n-k :)*/