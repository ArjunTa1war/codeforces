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
        int n;
        cin>>n;
        if (n==2)
        {
           cout<<-1<<"\n";
           continue;
        }
        int ans = 1;
        for (int i = 1; i <= n*n; i++)
        {   cout<<ans<<" ";
             ans+=2;
             if (ans>n*n) ans=2;
             if (i%n==0)cout<<"\n";
        }
    }
    return 0;
}
/*if we write any matrix in the form of
e e e e e  or  o o o o o
e e e e e      o o o o o
o o o o o      e e e e e
o o o o o      e e e e e  then there are no chances that the number
in two adjacent cells of matrix are adjacent :)*/