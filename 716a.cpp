#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c,ans=1;
    cin>>n>>c;
    int arr[n];
    for (int i = 0; i < n; i++)cin>>arr[i];
    for (int i = n-1; i > 0; i--)
    {
    if (arr[i]-arr[i-1]<=c)ans++;
    else break;
    }
    cout<<ans<<"\n";
    return 0;
}
/*we are to check the the condition given in question from the end 
as this is the best way and  if the condition (if we start from start)
b-a<=c is false then all the number gets erased and new number is printed
so we need to check from the end to get the number of digits left in the end :)*/