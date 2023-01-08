#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n, k;
        cin >> n >> k;
        int total = k/(n-1);
        int r = k - k/(n-1);    
        if (total%n==0)
        {
            cout<<total+k+1<<"\n";
        }
        else
        {
            cout<<total+k<<"\n";
        }
    }
    return 0;
}   