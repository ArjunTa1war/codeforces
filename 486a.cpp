#include <iostream>
using namespace std;

int main(){
    int long long n,sum=0;
   scanf("%lld",&n);
    if (n%2 == 0)
    {
       sum = n/2;
    }
    else
    {
        sum = (n+1)/2*-1;
    }
 printf("%lld",sum);
    return 0;
}