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
        for (int i = 0; i < n; i++)
        {
         for (int j = 0; j < i; j++)  cout<<"()";
         for (int j = 0; j < n-i; j++)  cout<<"(";
         for (int j = 0; j < n-i; j++) cout<<")";
         cout<<"\n";
        }
    }
    return 0;
}
/*we are to write n different lines with regular brackets cotnaining
2*n brackets and for this we can have amny approaches but this is the best appraoch 
first complete all brackets togther then i brackets different and n brackets 
together :)*/