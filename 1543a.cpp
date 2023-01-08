#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b)cout<<0<<" "<<0<<"\n";
        else{
          ll ab = abs(a-b);
          ll m  = min(a%ab,ab-a%ab);
          cout<<ab<<" "<<m<<"\n";
        }
    }
    return 0;
}
/*we are given two number and we are to check abs difference between them
and that's the first thing asked in the question 
and then we are to find the min between (a%ab ,ab-a%ab) :)*/