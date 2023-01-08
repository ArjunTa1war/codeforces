#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans=1,cash=1;
    cin>>n;
    int h[n],m[n];
    for (int i = 0; i < n; i++)cin>>h[i]>>m[i];
    for (int i = 1; i < n; i++)
    {
        if (h[i]==h[i-1]&&m[i]==m[i-1])cash++;
        else {
         ans = max(ans,cash);
         cash=1;
        }
    }
    ans = max(ans,cash);
    cout<<ans<<"\n";
    return 0;
}
/*the question is simple we are just to find the max number of customers entered in 
the exact same time this is the number of cash valera needs :)*/