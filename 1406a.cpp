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
        int a[101]={0};
        for (int i = 0; i < n; i++)
        {
            int num = n;
            cin>>num;
            a[num]++;
        }
        int n1=0,n2=0,check=0;
        for (int i = 0; i <=100; i++)
        {
            if (a[i]>=2&&check==0) {
            n1++;
            n2++;
            }
            else if (a[i]>=1){
                n2++; 
                check=1;
            }
            else break;
        }
        cout<<n1+n2<<"\n";
    }
    return 0;
}
/*from the given condition we are to find mex(a)+mex(b)it is quite obvious
that mex is the least number that is not available in the array
so we are to make such array in order to do that we can count the occurence of
every number and the one occuring for more than 2 times can be available to both
arrays if the number of occurence is 1 then after than 2 time occurence will not be
counted and if the occurence is 0 there the loop stops :)*/