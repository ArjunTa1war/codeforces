#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        int x = s.length();
        cout<<x<<"\n";
    }
    return 0;
}
/*the answers can be in the forom of 10^m and thus we need to calcuate the 
number of digits in the given number :)*/