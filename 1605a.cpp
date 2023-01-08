#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        a = a + c;
        b = 2 * b;
        int ans = abs(a - b);
        if (ans%3==0)cout<<0<<"\n";
        else cout<<1<<"\n";
    }
    return 0;
}
/*question is based on thinking answer can be just 1 or 0 
if the ans%3=0 then cout 0 else 1
as we can take two numbers and add 1 in one and substract 1
in other so it is quite obvious that we are to take one number
a1 or a3 and other number a2 we are to calculate the absolute 
difference and hence check the remainder now if the remainder is
2 then we can substract 3 and as becomes abs(-1) = 1 :)*/