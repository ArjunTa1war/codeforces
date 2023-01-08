#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char str[n+1];
    cin>>str;
    int a = 0,d=0;
    for (int i = 0; i < strlen(str); i++)
    {
       if (str[i] == 'A')
       {
           a++;
       }
       else
       {
           d++;
       }
    }
    if (a>d)
    {
        cout<<"Anton";
    }
    if (d>a)
    {
        cout<<"Danik";
    }
    else if (a ==d)
    {
    cout<<"Friendship";
    }
    return 0;
}