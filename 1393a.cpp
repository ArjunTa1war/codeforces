#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        cout<<(n/2)+1<<"\n";
    }
    return 0;
}
/*it is a problem of observaton
by drawing the diagram we can easily observe that the answer is (n/2)+1 :)*/