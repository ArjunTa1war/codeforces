#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        ll n;
        cin>>n;
        if (n<=6){
        cout<<15<<"\n";
        continue;}
        ll ans = (n/6)*15;
        ll c = n%6;
        if (c==1||c==2)ans+=5;//substact 15 and add 20
        else if (c==3||c==4)ans+=10;//substract 15 and add 25
        else if (c==5)ans+=15;
        cout<<ans<<"\n";
    }
    return 0;
}
/*either we buy small pizza ,medium pizza, large pizza
time taken to make 1 slice is same so here the best approach is
to take small pizza and then check the remainder 
it's just an observation that if rem is 1,2 then instead one small pizza
we should buy one medium pizza and in other case we need to buy one large
pizza if the remainder is 5 then add 15 i.e we need to buy one more small pizza :)*/