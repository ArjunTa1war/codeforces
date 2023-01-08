#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        cout<<1<<" "<<n-1<<"\n";
    }
    return 0;
}
/*explaination
gcd of any number (1,n) is 1 and lcm of any number (1,n) = n
so we can conclude that 1+n = sum(required answer)
so the two numbers are 1 and sum-1;
becuase in that way we can get the two numbers whose lcm+gcd will 
equal to the required number :)*/