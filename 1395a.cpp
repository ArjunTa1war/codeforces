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
        int r,g,b,w;
        cin>>r>>g>>b>>w;
        int sum = r+g+b+w;
        if (sum%2==0)
        {
            if (r%2==g%2&&g%2==b%2&&b%2==w%2) cout<<"YES\n";
            else cout<<"NO\n";   
        }else
        {
          if (w%2!=0)
          {
            if (r%2==0&&g%2==0&&b%2==0)cout<<"YES\n";  
            else if (r>0&&b>0&&g>0) cout<<"YES\n";
            else cout<<"NO\n";     
          }
          else
          {
            if (r%2+g%2+b%2==1)cout<<"YES\n";
            else if(r>0&&b>0&&g>0)cout<<"YES\n";
            else cout<<"NO\n";
          }
        }
    }
    return 0;
}
/*it's the problem which requires observation 
we can easily notice that if number of balls are even we reqire every ball to
be of same parity otherwise answer will be no 
and in other case we need to check for white balls
if number of white balls are odd then either all the r,g,b balls must be even
if not then if r,g,b greater than 0 then we can make it a pallindrome 
because for this no more than one colored ball should be odd.
and if w is even then also we can calcuate the same 
check editorial too for other approach :)*/