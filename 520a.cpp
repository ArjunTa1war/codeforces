#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[124] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]>='A' && s[i]<='Z')
        {
            s[i] = s[i]+32;
        }
        
    }
    for (int i = 0; i < s.length(); i++)
    {
        int x = s[i];
        arr[x] = 1;
    }
    for (int i = 97; i < 123; i++)
    {
        if (arr[i] == 0)
        {
            cout<<"NO";
            exit(0);
        }
        
    }
    cout<<"YES";
    
    return 0;
}