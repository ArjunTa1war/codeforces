#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        if (a%4==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    
    return 0;
}
/*polygon need to be placaed in such a way that
it's one axis is parallel to x axis and one parallel
to y axis now if this happens then
it must be parralel to all sides that'swhy if
it is completely divided by 4 then the polygon is beautiful :)*/