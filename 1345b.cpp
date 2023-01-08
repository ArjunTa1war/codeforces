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
        int n,ans=0;
        cin>>n;
        if (n<2)
        {
            cout<<ans<<"\n";
            continue;
        }
        for (int i = 1; i <= 1e9 ; i++)
        {
          int a = (3*(i*i)+i)/2;
          if (a>n)
          {
              n = n-(3*((i-1)*(i-1))+(i-1))/2;
              ans++;
              i=1;
          }
          if (n<2) break;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/*it was the question of judgement 
we can notice it very well that the number of cards used are in the form of
((3h^2)+h)/2 so that is 2,7,15,26........
as there are 2(1+2+3+4+.....h)cards vertical cards
and there are 0+1+2+3....h-1 horizontal cards
which is 2 (h(h+1)/2) + h(h-1)/2 == (3/2)h^2+(1/2)h and thus the formula was derived
so first we are to use the max number of cards to make the largest pyramid 
and then by remainder we need to make other pyramid such that
the pyradmid we make should be in decreasing order and when the number of cards are less
than 2 then no pyramid can be made :) */
