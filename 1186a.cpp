#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    if (min(m,k)>=n)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
/*explaination 
as we are to give atleast one m and k to each and every n
we are just to find whether the lowest of them is greater then 
or equal to n or not if min(m,k) is greater then cout yes otherwise
no :)*/