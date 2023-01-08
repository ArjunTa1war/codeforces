#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }
        if (sum==m) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
/*we are to find that is is possible to convert this array to any array such that
summation(summation)(arr[i]/j)=m;
now what ever the array is the summation will be 
(x/1+y/2+z/3)+(y/2+z/3)+(z/3)==x/1+2(y/2)+3(z/3)=x+y+z
and this is the condition :)*/