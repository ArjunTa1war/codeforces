#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s1[101],s2[101];
    cin>>s1>>s2;
    int x = strlen(s1);
    int count = 0;
    for (int i = 0; i < x; i++)
    {if ( s2[x-1-i] == s1[i])
    {
       count++;
    }}
    if (count == x)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}