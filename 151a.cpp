#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x =(k*l)/nl;//drinks are sufficient to make x taost
    int y = (c*d);//slices are sufficient to make y toast
    int z = (p/np);//salt is enough for z toast;
    cout<<min(min(x,y),z)/n<<endl;//for each friend;
    return 0;
}