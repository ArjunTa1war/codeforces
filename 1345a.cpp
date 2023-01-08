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
        int n,m;
        cin>>n>>m;
        if (n==1||m==1)
        {
            cout<<"YES\n";
        }else if (n==2&&m==2)
        {
            cout<<"YES\n";
        }else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
/*answer is valid just for two cases that is either one of them is one or both of them
are 2 that's all as there one no other options left as all the blank spaces are covered when 
we take 2 2 and no other options left :)*/