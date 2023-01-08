#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a+b==c+d||a+c==b+d||b+c==a+d)cout<<"YES\n";
    else if (a==b+c+d||b==a+c+d||c==a+b+d||d==a+b+c)cout<<"YES\n";
    else cout<<"NO\n";  
    return 0;
}
/*we are to check whether there exists any situation such that 
we can distribute a,b,c,d to two friends such that each of one get equal amount 
of toffee :)*/