#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int arr[n],check=0;
        for (int i = 0; i < n; i++) cin>>arr[i];
        for (int i = 0; i < n; i++)
        {
            int a = sqrt(arr[i]);
            if (a*a!=arr[i])
            {
               check = 1;
               break;
            }
        }
        if (check==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
/*if there is any number which is not a perfect square then cout yes 
other wise no :)*/