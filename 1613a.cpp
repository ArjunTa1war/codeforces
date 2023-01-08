#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#define ll long long
using namespace std;

void solve()
{
    string x1,x2;
    int p1,p2;
    cin>>x1>>p1>>x2>>p2;
    int l1 = x1.length()+p1;
    int l2 = x2.length()+p2;
    if (l1>l2)cout<<">\n";
    else if (l1<l2)cout<<"<\n";
    else
    {  int lt = max(x1.length(),x2.length());
        for (int i = 0; i < lt; i++)
        {   if (i>=x1.length())x1[i]='0';
            if (i>=x2.length())x2[i]='0';
            if (x1[i]<x2[i]){
                cout<<"<\n";
                return;
            }
            else if (x1[i]>x2[i]){
                cout<<">\n";
                return;
            }
        }
        cout<<"=\n";
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
/*we are just to make a string (Best way) and check the total
length of two numbers if l1>l2 cout<<">"and vice versa
now if the length of two strings are same then we can check from
the beginning that if x1[i]>x2[i]cout<<">" and if x1[i]<x2[i]cout<<"<"
so this will go on till the max of length of two strings and we need to keep
on giving the value of strings if the i is greater than their lengths
if all the numbers are same till the loop runs then cout<<"=" and that's 
the best approach to this problem :)*/