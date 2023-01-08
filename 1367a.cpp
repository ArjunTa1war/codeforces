#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        cout<<str[0];
        for (int i = 1; i < str.length()-1; i=i+2)
        {
            cout<<str[i];
        }
        cout<<str[str.length()-1]<<"\n";
    }
    return 0;
}

//as the abbaac will break as ab,ba,ac
//and we know that all numbers are repeating twice 
//except 1st one and last one that's all