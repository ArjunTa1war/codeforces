#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {int a,b,c;
    cin>>a>>b>>c;
    int m = max(a,max(b,c));
    if (a>b&&a>c)cout<<0<<" "<<a-b+1<<" "<<a-c+1;
    else if(b>a&&b>c)cout<<b-a+1<<" "<<0<<" "<<b-c+1;
    else if(c>a&&c>b)cout<<c-a+1<<" "<<c-b+1<<" "<<0;
    else cout<<m-a+1<<" "<<m-b+1<<" "<<m-c+1;
    cout<<"\n";
    }
    return 0;
}
/*we are to make the digit strictly greater then the max number if it's not max
and this is the approach :)*/