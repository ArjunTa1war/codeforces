#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        ll n;
        cin>>n;
        cout<<-(n-1)<<" "<<n<<"\n";
    }
    return 0;
}
/*it is quite obvious that -(n-1)-(n-2)+......  +(n-2)+(n-1)+n will always give
us the answer = n :)*/