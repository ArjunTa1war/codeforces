#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        ll c1 = x - 0;
        ll c2 = y - 0;
        if (x > 0 && y > 0 || x < 0 && y < 0)
        {
            ll n = min(c1,c2);
            ll s = max(c1,c2);
            ll amt = (s-n)*a;
            amt+=min(n*2*a,n*b);
            cout<<amt<<"\n";
        }
        else
        {
            cout<<(abs(c1)+abs(c2))*a<<"\n";
        }
    }
    return 0;
}
/*explaination
as acc to question we can just change two digits by paying the amount
b or we can change only one digit by paying the amount a
so we are to take difference of them where we can change only one digits
so multiply them by a only
now in order to make the two numbers zero 
there are two option that we can either do it one by one 
and multiplying by 2*a as we are changing two numbers differently
or we can multiply them by b and we are to select the minimum of them
so this is the answer :)*/
