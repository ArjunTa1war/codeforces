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
        int n;
        cin>>n;
        int ans = n;
        while (n/10>0)
        {
            int a = n%10;
            n = n/10;
            ans+=n;
            n = n+a;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/* if mishka spends 10 coins then she will get 1 coin more
so suppose mishka got x coins then she will get (x/10) coins in return
now we need to solve for one number for eg 
the number is 12345
lets calculate the extra coins she will get
firstly she have 12345 coins as she is using coins optimally
now add 12345 to ans now we need to find how many extra coins she can get
she can get extra coins iff the money she is having is greater then 10
now when she will spend 12340 coins the money she will get will be 
1234 and now she will be having 1239 coins 
in the next turn she will get 123 coins from shop and the total she will have
is123+9 =  132 as she only gave 1230 coins to the shopkeeper 
in next turn she will get 13 coins and total will be 15 coins and again she will get
1 coin and that's all 
ans = 12345+1234+123+13+1 = 13716 :)*/
