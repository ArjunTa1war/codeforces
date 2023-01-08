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
        int a;
        cin>>a;
        cout<<a<<" ";
        for (int i = 1; i <a; i++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
/*we are to write number from 1 to n in such a way that
that the number at position i shouldn't be i
so write last number at first position and then write other numbers
so that condition will be satisfied:)*/