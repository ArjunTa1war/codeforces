#include <iostream>
#include <algorithm>
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
        ll n,al=0,bo=0;
        cin>>n;
        ll arr[n];
        for (ll i = 0; i < n; i++)cin>>arr[i];
        sort(arr,arr+n);
        for (ll i = n-1; i >=0; i-=2){
            if (arr[i]%2==0)al+=arr[i];
        }
        for (ll i = n-2; i >=0; i-=2){
            if (arr[i]%2==1)bo+=arr[i];
        }
        if (al>bo)cout<<"Alice\n";
        else if (bo>al)cout<<"Bob\n";
        else cout<<"Tie\n";
    } 
    return 0;
}
/*here the win matters not the highest number of scores that's why win
is in others lose too
each player will check the maximum number if it meets their conditions
then it's fine for them or if it doesn't than also it's fine as other 
player can not take that number and he have to take other number which 
is obviously smaller or equal to the number taken by player :)*/