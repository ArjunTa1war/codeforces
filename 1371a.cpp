#include <iostream>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        ll s;
        cin>>s;
        cout<<(s+1)/2<<"\n";
    }
    return 0;
}
/*explaination
let the s be odd that is 7 then 1,2,3,4,5,6,7
1+6 =7;
2+5 =7;
3+4 = 7;
so there are 3+1 sticks which have length 7
now for even let 4;
1+3 = 4;
2;
now only 2 sticks are there which have length 4:)*/