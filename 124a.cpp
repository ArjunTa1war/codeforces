#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b;
    cin>>n>>a>>b;
    n = n-a;
    b++;
    cout<<min(n,b)<<"\n";
    return 0;
}
/*we are to find the number of positions where petr can stand 
so atleast a people should be ahead of him it means that total
number of positions where he can stand is n-a
now he can stand ahead of b poeple so he can stand in b+1 positons
we are to find the intersection of them that's why we are to find the
minimum of them :)*/