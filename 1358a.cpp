#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int r,c;
        cin>>r>>c;
        int x = r*c;//total number of boxes
        cout<<(x+1)/2<<"\n";
    }
    return 0;
}
/*explaination
as we know that a single bulb can enlight 2 blocks and number of blocks are m*n
if m*n is even then number of lamp should be m*n/2;
but if it is odd then one bulb will be left so that's why we have added one
as in case of even adding one will not effect as as 8 when converted to 9 will give the
answer 4 that is half of it :)*/