#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        if (a==b)
        {
            cout<<"0\n";
        }
        else if (b>a)
       {
           if ((b-a)%2!=0)
           {
               cout<<"1\n";
           }else
           {
               cout<<"2\n";
           } 
       }
       else
       {
           if ((a-b)%2==0)
           {
               cout<<"1\n";
           }else
           {
               cout<<"2\n";
           } 
       }
    }
    return 0;
}
/*we can add any odd number or substract even number
so if b>a and b-a is odd then we will just need to add any odd 
nubmer to a ; if b-a is even then we can add b-a/2 two times
so not any other case is more better than this:)*/