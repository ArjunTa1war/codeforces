#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n%2==0)
    {
       cout<<4<<" "<<n-4;
    }
    else
    {
        cout<<9<<" "<<n-9;
    }
    return 0;
}
//as 4 is the smallest composite prime number 
// and 9 is the smallest prime composite number
//n-4 is always composite
//n-9 is always compsidte as it will be divided by 2;