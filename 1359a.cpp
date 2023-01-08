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
        int n,m,k;
        cin>>n>>m>>k;
        int a = n/k;
        int b= min(m,a);
        int c = m - b;
        int d = c/(k-1);
        if (c%(k-1)!=0)  d++;
        cout<<b-d<<"\n";
    }
    return 0;
}
/*we need to check first that what is the maximum number of jokers a person can
get that's why we have used(min(m,a)) and then we need to check how many jokers are
left and we are to distribute the rest of the jokers in such a way that
the person having 2nd largest number of jokers is as least as possible
if the c%k-1 is 0 then we can distribure d to all and the answer will be b-d
but if it is not equal to 0 we need to add 1 to d as the 2nd max will become
d+1 :)*/