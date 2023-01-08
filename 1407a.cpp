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
 int one=0,zero=0 ;
 for (int i = 0; i < n; i++)
 {
     int a;
     cin>>a;
     if (a==1)one++;
     else zero++;
 }
 if (one>zero){
     if ((n/2)%2==0){
         cout<<n/2<<"\n";
         for (int i = 0; i < n/2; i++) cout<<"1 ";}
     else {
         cout<<(n/2)+1<<"\n";
         for (int i = 0; i < (n/2)+1; i++) cout<<"1 ";}
         return;
 }
 cout<<n/2<<"\n";
 for (int i = 0; i < n/2; i++)cout<<"0 ";
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
        cout<<"\n";
    }
    return 0;
}
/*if there are n numbers then there are only three conditions
that is one>zero,zero>one,zero=one
now we can write n/2 digits 
so now our approach is jus to write all the same numbers
but in case of one>Zero we are to check that number of one's 
should not be odd as it will not give the zero
if n/2 is odd then we are to take n/2+1 digits
in other cases we can write n/2 0's for the answer :)*/