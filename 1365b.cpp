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
        int a[n],b[n],one=0,zero=0;
        for (int i = 0; i < n; i++) cin>>a[i];
        for (int i = 0; i < n; i++){
        cin>>b[i];
        if (b[i]==1)one++;
        else zero++;
        }
        int check = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i]<a[i-1])check = 1;
        }
        if (check==0)cout<<"Yes\n";
        else if (zero>0&&one>0)cout<<"Yes\n";
        else cout<<"No\n";    
    }
    return 0;
}
/*if all digits are not same in b that is there is atleast 
one 1 and one 0 then any sequence of the a can be sorted and
first we are to check this too that if the series a is sorted then
there is no need to check the number of one's and zero's in the 
array b :)*/