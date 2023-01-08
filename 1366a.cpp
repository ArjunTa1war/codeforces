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
        int a,b,ans=0;
        cin>>a>>b;
        if (max(a,b)>=2*min(a,b))cout<<min(a,b)<<"\n";
        else cout<<(a+b)/3<<"\n";
    }
    return 0;
}
/*it is quite simple we can make atmost (a+b)/3 emerlad 
and if the condition of max >=2*min satisfies then cout <<min 
emerlads cannot be greater than a
emerlads cannot be greater than b
emerlads cannot be greater than (a+b)/3
so the answer can be min(a,b,(a+b)/3) :)*/