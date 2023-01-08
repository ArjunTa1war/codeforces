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
        cout<<n/2<<"\n";
    }
    return 0;
}
/*if we are given numbers till n then the max gcd will always be n/2
for eg take 6 as eg
(3,6)will give out the max gcd whether take 7 as gcd then also the pair will be
(3,6)which is equal to 7/2 = 3.5 which is 3 :)*/