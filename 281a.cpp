#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a = s[0];
    if (a>90)
    {
        s[0] = s[0]-32;
    }
    cout<<s;
    return 0;
}