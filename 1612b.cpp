#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    int half = n/2;
    if (b>a)
    {
       if (n-b>half-1||a-1>half-1)
       {
           cout<<-1<<"\n";
           return;
       }
       cout<<a<<" ";
       for (int i = b+1; i <=n ; i++)cout<<i<<" ";
       for (int i = a+1; i < b; i++)cout<<i<<" ";
       for (int i = 1; i < a; i++)cout<<i<<" ";
       cout<<b<<"\n";
    }else
    {
        if (b-1<half-1||n-a<half-1||a-b>1)
        {
            cout<<-1<<"\n";
            return;
        }
        for (int i = a; i <= n; i++) cout<<i<<" ";
        for (int i = 1; i <=b; i++)cout<<i<<" ";
        cout<<"\n";
    }
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
/*question is totally about observation we are to make two
series such that in first series a is the lowest number and in
other series b is the largest number now we are to solve for
b>a we are to check that the number of digit to be placed in 1 half
is (n/2-)1 as one position in each half is occupied by a,b;
so we are to check that there should not be more digits greater then
b then the half and same for a that is there should not be more than
half digits lower than a ,if both conditioni satisfies then we can first
print a then all the numbers greater than b then a->b then 1->a
then b and that's all 
now if the condition is a>b
so there should be only one difference between a and b 
for eg if the number is 7,5
then the possible series will be
7,8,9... and 1 2 3 4 5.. so the numbers between them will be excluded
and we are to check that there should be atleast half number of number
greater then a and half number of number less than a so this is the
solution to this :)*/