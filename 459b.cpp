#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    ll &a= *min_element(arr,arr+n);
    ll &b= *max_element(arr,arr+n);
    cout<<b-a<<" ";
    ll min_number = 0,max_number = 0;
     
   for (int i = 0; i < n; i++)
   {
       if (arr[i]==a)
       {
          min_number++;
       }
       if (arr[i]==b)
       {
           max_number++;
       }
   }
    if (a == b)
    {
        cout<<(n*(n-1))/2;
    }
    else
    {
         cout<<max_number*min_number;
    }
    return 0;
}
/*explaination 
we are given an array and we are to find the max and min element and find
their difference now we are to find the number of ways we can select two numbers
so if the numbers are different then the answer is simple that is max_number*min_number
if the numbers are same then it is normal that all the numbers are same that is n
min_number = max_number = n;
so that's why we are to choose any two numbers from the given number n 
formula is ncr = (n!)/(n-r)!*r! and r is 2 that is why number of ways become n*(n-1)/2 
that's all :)*/