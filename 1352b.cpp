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
       if (n==1&&k==1)
       {
           cout<<"YES\n";
           cout<<"1\n";
       }
       else if (k%2==0&&n%2!=0||n<k)  cout<<"NO\n";
       else if (n%2==0&&k%2==0)
       {
             cout<<"YES\n";
             for (int i = 0; i < k-2; i++) cout<<"1 ";
             n = n-(k-2);
             if ((n/2)%2==0) cout<<(n/2)-1<<" "<<(n/2)+1;
             else cout<<(n/2)<<" "<<(n/2);
             cout<<"\n";
       }
       else if (n%2!=0&&k%2!=0)
       {
           cout<<"YES\n";
           for (int i = 0; i < k-1; i++)cout<<"1 ";
           n = n-(k-1);
           cout<<n<<"\n";
       }
       else if (n%2==0&&k%2!=0)
       {
           if (n>=2*k)
           {   cout<<"YES\n";
               for (int i = 0; i < k-1; i++)cout<<"2 ";
               n=n-2*(k-1);
               cout<<n<<"\n";
           }
           else cout<<"NO\n";
       }
    }
    return 0;
}
/*we just need to observe each and every case here
that is when n is even/odd and k is odd/even
if k is even and n is odd then no possible because either we take odd number
or take even when multiplied with k it will give even number
now if the n and k parity is same then no issue it is simple
if n is even and k is odd then we can never take any odd number 
as odd+odd+odd.......(odd)times will be odd only
that's why we need to write atleast 2 that's why we need to check the condition
n>=2*k also :)*/