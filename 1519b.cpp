#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,m,k,ans=0;
        cin>>n>>m>>k;
       int total = n*m-1;
       if (total ==k)
       {
           cout<<"YES\n";
       }else
       {
           cout<<"No\n";
       }
    }
    return 0;
}
/*in every way we can reach the n,m cordinates in n*m-1 if we are starting from 1,1;
for eg we want to go to 4,4 from 1,1
our path will be like
1,1 - 1,2 - 1,3 - 1,4 which will take 3 burles then 1,4 - 2,4 - 3,4 - 4,4 which will take 4+4+4 burles
so total burles it will take is 4+4+4+1+1+1 which is n*m-1 that is 15
and the equation will be same for rest of the points  :)*/