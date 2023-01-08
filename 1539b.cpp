#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    string str;
    cin>>str;
    int sum[100001]={0};
    sum[0]=0;
    for (int i = 0; i < n; i++)
    {
        int a = str[i]-96;
        sum[i+1]+=sum[i]+a;
    }
    for (int i = 0; i < q; i++)
    {
        int r,l;
        cin>>r>>l;
        cout<<sum[l]-sum[r-1]<<"\n";
    }
    return 0;
}
/*from index r to l we are to count the total length of the song
we are given that we are to write a for 1 time,b for 2 times, c for 3 times
and so on so we are to add s[i]-96(common formula) to the answer
and by adding all numbers from r to l the answer can be obtained :)*/