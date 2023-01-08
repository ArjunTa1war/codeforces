#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,check=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    sort(arr,arr+n);
    for (int i = 0; i < n-2; i++){
    if (arr[i]+arr[i+1]>arr[i+2]&&arr[i]+arr[i+2]>arr[i+1]&&arr[i+2]+arr[i+1]>arr[i])
    {
        cout<<"YES\n";
        check=1;
        break;
    }
}
if (check==0)cout<<"NO\n";
    return 0;
}
/*we need such kind of number such that the difference between the numbers is least
that's why we need to sort first and keep on checking the considition
if condition of 
a+b>c
b+c>a
c+a>b
or smallest number+2nd smallest number > largest number (this condition is also same )
satisfies then cout yes otherwise no :)*/