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
        int l,r;
        cin>>l>>r;
        if (r/l <2)
        {
            cout<<r-l<<"\n";
            continue;
        }
        
        if (r%2==0)
        {
            cout<<(r/2)-1<<"\n";
        }
        else
        {
            cout<<(r/2)<<"\n";
        }
    }
    
    return 0;
}