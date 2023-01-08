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
        int n,ans=0;
        cin>>n;
        for (int i = 2;; i=i*2)//infinite loop
        {
            if (i>n)
            {   ans = i;
                break;
            }
        }
       //as here ans becomes 2*x greater then the ans we want that's why
       ans = ans/2;
       cout<<ans-1<<"\n";
    }
    return 0;
}
/*we just want the number where the highest set bit becomes zero and that number
is in the form of 2^n and that number will be like 1000000 all the numbers except the
higherst bit one will be zero
so we need to take 1 digt less than it as it will be 01.....in this way all will become
zero
for eg if we take 17 then till 16 it will go like 1000.....then we need 0 at the first place
which is possible in 15 and if the 17&16 becomes 10000 then its & anything 01111 or 00011 becomes
000000 and this is what we want :)*/