#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int x = min(k2,min(k5,k6));
    int ans = x*256;
    k2= k2-x;
    ans=ans+(min(k2,k3)*32);
    cout<<ans<<"\n";
    return 0;
}
/*we are given k2 digits 2 ,k3 digits 3 , k5 digts 5 ,k6 digits 6
we know that making 256 takes one digits of 2 ,1 digits of 5 ,1 digit of 6
so the one present in minimum number of times that can make 256 and hence added to
answers now we can take 2 and 3 to amek 32 2 is used in 256 as well so we need to 
find the number of remaining 2 and then find how many 32 can be made and add it
to ans and the total will be the answer :)*/