#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int total = 0;
        if (a>40)
        {
          total += 1;  
        }
        if (b>=35)
        {
            total += 10;
        }
        if (c>60)
        {
            total += 100;
        }
        if (total == 111)
        {
            cout<<"A";
        }
        else if (total ==101)
        {
            cout<<"B";
        }
        else if (total  == 110)
        {
            cout<<"C";
        }
        else if (total == 11)
        {
            cout<<"D";
        }
        else if (total > 0)
        {
            cout<<"E";
        }
        else
        {
            cout<<"F";
        }
        cout<<"\n";
    }
    
    return 0;
}