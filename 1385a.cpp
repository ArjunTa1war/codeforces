#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        int count = 0;
        sort(arr,arr+3);
        if (arr[1]==arr[2])
        {
           cout<<"YES\n";
        }else
        {
            cout<<"NO\n";
            continue;
        }
        cout<<arr[2]<<" "<<arr[0]<<" "<<arr[0]<<"\n";
    }
    return 0;
}
/*explaination
as xyz if the maximum digits are two if x = (max(a,b)),
y = max(b,c),z = max(c,a) 
can take every case
if a>b,b>c then automatically a>c therefore a will 
occur two times thats why we need to check that here
to satisfy this conditon than 
the two values that are max should occur two times*
then those two values are written as it is ans write the lowest among
that at third place:)*/