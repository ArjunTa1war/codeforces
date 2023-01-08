#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        cout<<n<<"\n";
    }
    return 0;
}
/*explaination
we can observe in the figure clearly that if we need to take atleast 1 crystal
verically then all the other triangles will be slanted 
we are given n crystals so we can take 1 crystal vertically at a single time
so the total number of cases will be n :)*/