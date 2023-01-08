#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a = 0;
   for (int i = 0; i < n; i++)
   {
       cout<<s[i];
       i+=a;
       a++;
   }
    return 0;
}
/*the problem is simple we are given a string 
containing the letters like 12233344445555 that is 1 one time,2 two times
and so on so in the end we are write the string 12345
and this can be done if we take the iterations 1,2,4,7,11 as i starts from
0 so we are to take digits 0,1,3,6,10,15.......
and this is noting other than 0+1 = 1+2(3) = 3+3(6) = 6+4(10)
and this is the simplest approach :)*/