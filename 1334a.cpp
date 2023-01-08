#include <iostream>
using namespace std;
void solve(){
      int n;
        cin>>n;
        int p [n],c[n],d=0;
        int plays=0,clear=0;
        for (int i = 0; i < n; i++)cin>>p[i]>>c[i];
        for (int i = 0; i < n; i++)
        {
            if (p[i]<c[i] || p[i]-c[i]<d||p[i]<plays||c[i]<clear)
            {
                cout<<"NO";
                return ;
            }
            d = p[i]-c[i];
            plays = max(plays,p[i]);
            clear = max(clear,c[i]);
        }
        cout<<"YES";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
      solve();
      cout<<"\n";
    }
    return 0;
}
/*logic is simple
nor number of plays can reduce
nor number of clear can reduce
nor the number of plays can be less than number of clears
nor the difference between plays and clear can reduce
so we just need to apply this logic :)*/