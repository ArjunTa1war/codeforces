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
        int n,check = 0;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n-1; i++)
        {
            if (s[i]!=s[i+1])
            {
                cout<<i+1<<" "<<i+2<<"\n";
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            cout<<-1<<" "<<-1<<"\n";
        }
    }
    return 0;
}
/*we are to choose a substring such that number of a = number of b 
and so ab or ba is also a substring that's why where we find these two
at consecutive position we just need to write it's positions :)*/
