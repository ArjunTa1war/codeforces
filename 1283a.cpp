#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int h,m;
        cin>>h>>m;
        cout<<(23-h)*60+(60-m)<<"\n";
    }
    return 0;
}
/*we are just to find the minutes to go reach 0 0 that's why 
till 23 count the number of hours and then convert it to minutes and then
find the number of minutes left for next hour :)*/