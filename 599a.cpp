#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int d1,d2,d3;
    cin>>d1>>d2>>d3;
    int a = d1+d2+d3;
    int b = 2*(d1+d3);
    int c = 2*(d2+d3);
    int d = 2*(d1+d2);
    cout<<min(min(a,b),min(c,d));
    return 0;
}
/* distance between home and first shop d1,
 distance between home and second shop d2,
 distance between both the shops = d3;
 so we are to consider it like a triangle with 3 vertices
 now there are 4 ways to cover all three vertices if we want to
 return at home we are just to find the minimum distance :)*/