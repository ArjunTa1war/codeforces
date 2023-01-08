#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char p[101];
    cin>>p;
    for (int i = 0; i < strlen(p); i++)
    {
        if (p[i] =='H'|| p[i]=='Q'|| p[i] =='9')
        {
            cout<<"YES";
            exit(0);
        }

        
    }
    cout<<"NO";
    
    return 0;
}