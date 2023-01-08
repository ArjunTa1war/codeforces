#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    char str[m*n];
    for (int i = 0; i < m*n; i++)
    {
        cin>>str[i];
    }
    for (int i = 0; i < m*n; i++)
    {
        if (str[i]!='B'&& str[i]!='W'&&str[i]!='G')
        {
            cout<<"#Color";
            return 0;
        } 
    }
    
    cout<<"#Black&White";
    return 0;
}
/* a photo is called black and white if it contains only w,b,g colour
if any color other then it appears than print colour :) else b&w*/