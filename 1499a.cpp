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
        int n,k1,k2;
        cin>>n>>k1>>k2;
        int w,b;
        cin>>w>>b;
        if (w>(k1+k2)/2){
            cout<<"NO\n";
            continue;
        }
        if (b>(2*n-(k1+k2))/2){
           cout<<"NO\n";
           continue;
        }
        cout<<"YES\n";
    }
    return 0;
}
/*we are just to find the number of pairs of k1+k2 and it can be found
easily by k1+k2/2 and for black color we know that the rest of the blocks
can be used which are 2*n-(k1+k2) and for finding the number of pairs we can
divide them by 2 and check the condition :)*/