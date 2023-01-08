#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int total=0;
    for (int i = 0; i <n; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        if (sum>=2)
        {
            total++;
        } 
    }
    cout<<total;
    return 0;
}