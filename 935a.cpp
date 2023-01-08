#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans=0;
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
/*our target is just to find the total number of possible division 
by the number ranging from 1 to n because the team will
constitute of leder and team members so the sum of leader and 
members must divide the n
we are just to find the total number of possible teams that can be
made with equal number of members:)*/