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
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        cout<<l1<<" ";
        if (l1==l2)cout<<r2;
        else cout<<l2;
        cout<<"\n";        
    }
    return 0;
}
/*we are just to find one number between [l1,r1] and other number between [l2,r2]
it is quite obvious that l1 is the number in it
now for second number (condition is it should not be same as 1st one)
so we need to check if l1==l2 theen cout r2 as in this case r2 cannot be
l1 so two integers will be distinct if l1!=l2 then cout l2 :)*/