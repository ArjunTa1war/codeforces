#include <iostream>
using namespace std;

int main()
{

    unsigned long long n,a,cnt=0;
    cin >> n;
   while (n)
   {
        a = n%10;
        n = n/10;
        if (a==7||a==4)
        {
            cnt++;
        }    
    }
    
   if (cnt==7||cnt==4)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }
   
    return 0;
}