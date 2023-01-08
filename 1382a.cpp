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
        int n,m,ans=0;
        cin>>n>>m;
        int a[n],b[m];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i]==b[j])
                {
                    ans = a[i];
                    break;
                }    
            } 
            if (ans==a[i])
            {
              break;
            }  
        }
         if (ans==0)
         {
             cout<<"NO\n";
         }
         else
         {
             cout<<"YES\n" ;
             cout<<1<<" "<<ans<<"\n";
         }    
    } 
    return 0;
}
/*we are just to find the shortest subsequence of the array a and b and write it's length
and we know that shorest length of any substring is 1 and we are to find any one digit
which is common in both the arrays a and b if there is any digit common then cout yes and
write the common digit if there is no digit common then cout no :)*/