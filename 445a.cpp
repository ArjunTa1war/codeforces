#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char a;
            cin>>a;
            if (a=='.'){
            if (i%2==0)  {
                if (j%2==0)cout<<"W";
                 else cout<<"B";  }
            else {
                if (j%2==0)cout<<"B";
                else cout<<"W";  }
            }
            else cout<<a;
        }
        cout<<"\n";
    }
    return 0;
}
/*my first approach was to check for each i-1,j-1
but it will give the wrong answer in many cases that's why the best approach is
to write in the format of
w b w b w
b w b w b
w b w b w .....and so on it will give the correct result always :)*/