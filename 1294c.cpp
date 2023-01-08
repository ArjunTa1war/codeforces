#include <iostream>
#include <cmath>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int first,second,third;
    first=second=third=0;
    for (int i = 2; i <= sqrt(n); i++)
    {
       if (n%i==0)
       {
          first = i;
          n/=i;
          break;
       }
    }
    if (first==0)
    {
       cout<<"NO\n";
       return;
    }   
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0&&i!=first)
        {
            second = i;
            n/=i;
            break;
        }
    }
    if (second==0)
    {
        cout<<"NO\n";
        return;
    }
    if (n<2||n==first||n==second)
    {
        cout<<"NO\n";
        return;
    }else
    {
        cout<<"YES\n";
        third = n;
        cout<<first<<" "<<second<<" "<<third<<"\n";
    }
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }  
    return 0;
}
/*the main logic here is just that the no mulitple of
n will be above sqrt(n)
(as if the multiples of n will be same
as we can write any number in n*n
now we can notice that the multiple of both n will be same)
so we are just to find two
numbers such that the first number completely divides the
n and the second number completely divides the n/first
now n/(first*second)becomes the third number
now if the third number satisfies all the conditions 
given in the question then cout yes otherwise cout no :)*/