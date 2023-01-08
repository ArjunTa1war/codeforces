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
        int a[n],b[n],pos=0,neg=0,check=0;
        for (int i = 0; i < n; i++) cin>>a[i];
        for (int i = 0; i < n; i++) cin>>b[i];
        for (int i = 0; i < n; i++)
        {
            if (a[i]<b[i]&&pos==0){
            cout<<"NO\n";
            check = 1;
            break; }
            if (a[i]>b[i]&&neg==0){
            cout<<"NO\n";
            check = 1;
            break;}
            if (a[i]==1)pos++;
            if (a[i]==-1)neg++;
            if (pos>=1&&neg>=1) break;
        }
        if (check==0)cout<<"YES\n";
    }
    return 0;
}
/*question is simple we are just to check for the time till we get one '1' and one '-1'
as we can covert anynumber to anyother number by using these
we can add the digit i to the digit j if and only if j>i so we need to check this
if this condition is proved wrong then cout no otherwise yes :)*/