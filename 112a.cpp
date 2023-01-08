#include <iostream>
#include <string.h>
using namespace std;
void low(char *s1)
{
    int i = 0;
    while (s1[i] != '\0')
    {
     if (s1[i] >= 'A' && s1[i] <= 'Z')
      s1[i] += 32;
        i++;
    }
}
int main(){
    int check;
    char s1[100],s2[100];
    cin>>s1>>s2;
    low(s1);
    low(s2);
    check = strcmp(s1,s2);
    if (check == 0)
    {
        cout<<0;
    }
    else if (check > 0)
    {
        cout<<1;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}