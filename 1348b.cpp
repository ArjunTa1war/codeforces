#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{   int check[101] = {0};
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
        check[arr[i]]++;
    }
    int distinct[101]={0};
    int j = 0;
    for (int i = 1; i <=100; i++){
        if (check[i]>=1){
           distinct[j] = i;
           j++;
        }
    }
    if (j>k)
    {
       cout<<-1<<"\n";
       return;
    }
    cout<<n*k<<"\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (distinct[j]>0)cout<<distinct[j]<<" ";
            else cout<<1<<" ";
        }
    }
    cout<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
/*question is simple we are to make array in periodic way 
there should not be more than k distinct numberes as then to
make such array will be impossible
so we can make write ntimes k in the periodic form
as this will be the best approach 
so we can write all distinct number and for k-(distinct) that is where k=0
we can write any value there we can take 1,2, or any other digits too
for eg the array is 1 2 3 3 2
we are given k = 4
so we can write 1 2 3 (1)additionsl 1 2 3 1 1 2 3 1 ....and so on
in this way we can get our answer :)*/