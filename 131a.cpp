#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int x = s.length();
    int z = 0;
    for (int i = 0; i < x; i++)
    {
      if (s[i] >= 'A' && s[i]<= 'Z')
       {
           z++;
       }
    }
    if (z == x)
    {
        for (int i = 0; i < x; i++)
        {
            s[i] = s[i]+32;
            cout<<s[i];
        }
        exit(0);
    }
    for (int i = 1; i < x; i++)
    {
       if (s[i] >= 'a' && s[i]<= 'z')
       {
           cout<<s;
           exit(0);
       }
       
    }
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] = s[0] - 32;
    }
    
    for (int i = 1; i <x; i++)
    {
        if (s[i]>='A' && s[i]<='Z')   
        {
            s[i] = s[i]+32;
        }
    }
    cout<<s;
    return 0;
}