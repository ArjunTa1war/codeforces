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
        int n,k;
        cin>>n>>k;
        if (n>=k)
        {
           if ((n+k)%2==0)
           {
               cout<<0<<"\n";
           }
           else cout<<1<<"\n";
        }else
        {
            cout<<k-n<<"\n";
        }   
    }
    return 0;
}
/*(here A is n )if A is less then k then cout K - A as here we can set b as a and move the a
to k in this way (AB)-(OB)= k as ob will get 0 and ab wll be k
else n is not less or grater then k then we can say that b lies in between the a and 0
(b) so the equation becomes (B-0)-(A-B) = k
and thus in short we can say 2B-A = k and 2*B = K+A if in this case value of b is possible
then cout the answer as 0 else we can add 1 to the A to make it even:)*/

