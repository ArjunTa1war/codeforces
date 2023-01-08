#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n],copy[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
        copy[i] = arr[i];
    }
   sort(copy,copy+n);
   for (int i = 0; i < n; i++)
   {
       if (arr[i]!=copy[i])
       {
           if (arr[i]%copy[0]!=0)
           {
               cout<<"NO\n";
               return;
           }
       }
   }
   cout<<"YES\n";
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
/*we are first to create an array that is copy of original array
and sort the array we are to compare the both arrays
and if the number is in it's correct place we don't need to swap it
with any number and if the arr[i]!=copy[i] then we are to check whether
the number is divisble by smallest number in array or not
if not then cout no and return else continue
now if evrey number on which arr[i]!=copy[i] is divisible by smallest number
then we can swap each and every element by just two numbers that is taking
minimum number and the other number now the gcd is obvious (min no.) for them
and we can swap the array till it get sorted by this operation :)*/