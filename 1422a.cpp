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
        int a,b,c;
        cin>>a>>b>>c;
        cout<<max(a,max(b,c))<<"\n";
    }
    return 0;
}
/*if the length of 4th line is the max of the all numbers then it is quite
obvious that a,b,c,d will form a quadrilateral doesn't matter what are the 
lenghts of other two sides :)*/