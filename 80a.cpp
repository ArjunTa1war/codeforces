#include <iostream>
using namespace std;
int prime[]= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for (int i = 0; i <15 ; i++)
    {
        if (prime[i]==n&&prime[i+1]==m)
        {
            cout<<"YES\n";
            exit(0);
        }  
    }
    cout<<"NO\n";
    return 0;
}
/*we are just to find whether the m is exactly the next prime number to the n or
not :)*/