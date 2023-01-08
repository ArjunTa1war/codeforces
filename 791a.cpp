#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int ans =0;
   while (1)
   { 
       if (a>b)
       {
           break;
       }
       ans++;
       a = a*3;
       b = b*2;
   }
   cout<<ans;
    
    return 0;
}