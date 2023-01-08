#include <iostream>
using namespace std;

int main(){
    int r,b;
    cin>>r>>b;
    int x = max(r,b);
    int y = min(r,b);
    cout<<y<<" "<<(x-y)/2;
    return 0;
}