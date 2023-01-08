#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
    
        int length = str.length();
        if (length > 10)
        {
            cout<<str[0]<<length-2<<str[length-1]<<endl;
        }
        else
        {
            cout<<str<<endl; 
        }
    } 
    return 0;
}