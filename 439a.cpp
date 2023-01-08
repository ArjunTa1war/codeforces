#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    int arr[n];
    int total = 0,ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        total += arr[i]+10;
    }
    total = total - 10;
    if (total>d)cout<<-1<<"\n";
    else
    {
        ans = (n-1)*2;
        ans+=(d-total)/5;
        cout<<ans<<"\n";
    }
    return 0;
}
/*devu takes arr[i]+10 min for a single song in which 10 min is for rest
now we will assume this minutes if devu cannot sing all of his songs then
cout<<-1 and then churu can crack two jokes in 10 min 
now after each n churu will crack two jokes
so till devu complete all his songs he will crack n-1(*2)jokes
and after that for every 5 minutes he will crack 1 joke
and this is the whole approach :)*/