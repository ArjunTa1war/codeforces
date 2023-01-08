#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans = 1;
   for (int i = 1; i <=n; i++)
   {
       ans = ans+(4*(i-1));
   }
   cout<<ans<<"\n";
    return 0;
}
/*we can easily observe that in each nth order mulitples of 4's are getting added
that is for 1st
1 = 1 + 4*0;
5 = 1 + 4*1;
13 = 5 + 4*2;
25 = 13 + 4*3; and so one......so we just need to implement this :)*/