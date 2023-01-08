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
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<(a+b+c)/2<<"\n";
    }
    return 0;
}
/*we just need to find that how many candies alice can get after the division
if either bob or alice has more candies they discard if it can not be divided
that is why we need to take the number closest to (a+b+c)/2 and less than it or equal
so this is the answer :)*/