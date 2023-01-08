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
        int b,p,f,h,c,ans=0;
        cin>>b>>p>>f>>h>>c;
        b = b/2;
        if (h>c)
        {
            ans+=min(b,p)*h;
            b = b-min(b,p);
            ans+=min(b,f)*c;
        }
        else
        {
            ans+=min(b,f)*c;
            b = b - min(b,f);
            ans+=min(b,p)*h;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/*we need to check where is the more profit,if the profit is more in hamburger first
we will use all buns for hamburger then rest of the buns for chicken burger
if the profit is more in chicken burger we need to use all buns for chicken burger than
for ham burger and that's all :)*/