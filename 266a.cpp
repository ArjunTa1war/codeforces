#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   char s[n+1];
    int total = 0;
    for (int i = 0; i < n; i++)
    {
            cin>>s[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == s[i+1])
        {
            total++;
        }
    }
    cout<<total;
    
    return 0;
}