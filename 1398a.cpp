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
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
        }
       if (arr[1]+arr[2]<=arr[n])
       {
           cout<<1<<" "<<2<<" "<<n<<"\n";
       }
       else
       {
           cout<<-1<<"\n";
       }
    }
    return 0;
}
/*we are just the find the indices of the 3 digits 
where if we take the values of a[i]  then those 3 digit make the triangle 
where it is not possible to make a triangle with nonzero area
it means where we can make the triangle with area of zero or the triangle is not possible
and as the array is in increasing order thats why we will take the two lowest digts and the
higerst digit as it increasing the chances that arr[1]+arr[2]<=arr[n] :)*/