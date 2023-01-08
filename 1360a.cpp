#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int l,b;
        cin>>l>>b;
        int z = max(max(l,b),2*min(l,b));
        cout<<z*z<<"\n";
    }
    return 0;
}
/*explaination
like there are two rectangle and we are to fit those within a square 
now will find the smallest in that that is either l is large or breath is large
and the other one to be multiplied by two now we will find the gretest in these two
for eg take breath as 4 and length as 1 now to small one is 1 if will multiply it by 2
then also breath will be large and int the square formed by breath can carry other rectangle too 
becuase if we multiply 2 to smaller one it ensures that smaller size of both the recangle can fit
in that length as and the larger one will contain 2*b and l so thats why answer is this :)*/
