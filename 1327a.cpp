#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
     ll n, k;
     cin >> n >> k;
     if (k*k > n || k%2!=n%2)
     {
         cout<<"NO\n";
     }
     else
     {
         cout<<"YES\n";
     }
    }
    return 0;
}
/*explaination
First of all, notice that the sum of the first k odd integers is k^2.
If k^2>n then the answer obviously "NO". And if n%2≠k%2 then the answer is "NO"
also (% is modulo operation). Otherwise, the answer is always "YES" and it seems like 
this: [1,3,5,…,2(k−1)−1,rem], where rem=n−∑i=1k−1(2i−1). It is obviously greater than 2(k−1)−1 
because k2≤n and it is obviously odd because the parity of n and k is the same.
if k is odd then the sum of k odd numbers will be odd and cannot be even so n
should also be odd and if k is even the sum of odd integers will be even and hence n should
also be even :)*/