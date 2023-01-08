#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin>>k;
        int x=gcd(k,100);
        cout<<100/x<<"\n";
    }
    return 0;
}
/*conc. can be found by voume of solute/volume of solution *100 and in this case we are to find the minimum
volume of solution required to make the potion such that it's concentration is k
so k/100 is the vol/vol we are to decrease 100 as much we can as we are to find the min number of steps
or volume for that we have to find the gcd such that if the previous
was 20/100 we can write it as 1/5 so here the answer becomes 5
if we find the gcd then the next thing we are to do is dividing 100 by it and that is the required solution
of the given question :)*/
