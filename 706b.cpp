#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   sort(arr,arr+n);
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin>>x;
        cout<<upper_bound(arr,arr+n,x)-arr<<"\n";
    }
   return 0;
}
/* explaination
we are given n shops and price of bottle at these shops is taken in array,now it is given that for howmany days he will buy
juice and at ith day he will spent mi rupees 
now as he have mi rupees to spent on i day we are to find how many options are there for him
i.e how many shops is selling drink at price less than mi;
Iterator lower_bound (Iterator first, Iterator last, const val) 
Iterator upper_bound (Iterator first, Iterator last, const val) 
lower_bound returns an iterator pointing to the first element in the range [first,last) 
which has a value not less than ‘val’. 
upper_bound returns an iterator pointing to the first element in the range [first,last) 
which has a value greater than ‘val’. 
*/
// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int arr[10] = {4,5,5,5,5,5,5,5,6,10};
//     int *x = upper_bound(arr,arr+10,5);
//     int *y = lower_bound(arr,arr+10,5);
//     cout<<*x<<endl<<*y;
//     cout<<x-arr;
//     cout<<"\n"<<y-arr;
//     //here arr is the &arr[0];
//     //now upperbound will see the last 5 and will return a indices greter than it
//     //while lower bound will print the indices for the gretest value that is less than or equal to the given 
//     //number
//     return 0;
// }