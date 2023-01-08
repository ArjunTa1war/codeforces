#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int l = 0; l < t; l++)
    {
        int n,m,i,j;
        cin>>n>>m>>i>>j;
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<"\n";
        // cout<<n<<" 1 "<<"1 "<<m<<"\n";//also correct
    }
    return 0;
}
/*for any test case the answer is two corner points of opposite direction
so that is the answer 
amd the max distance it can cover is
2(n-i + m-j) + 2(i-1+j-1)==2(m+n)-4
so this is the max otherwise the yo yo will get closer and thus
distance will be reduced :)*/