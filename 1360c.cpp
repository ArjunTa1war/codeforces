#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
     int n;
        cin>>n;
        int arr[n],o=0,e=0;
        for (int i = 0; i < n; i++){
            cin>>arr[i];
            if (arr[i]%2==0)e++;
            else o++; 
        }
        if (e%2==0&&o%2==0)
        {
            cout<<"YES\n";
            return;
        }
        sort(arr,arr+n);
       for (int i = 0; i < n-1; i++)
       {
           if (arr[i]+1==arr[i+1])
           {
               cout<<"YES\n";
               return;
           } 
       }
       cout<<"NO\n";
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
/*so we are to find the pairs with same parity 
if the number of even terms are even then number of
odd terms is also even (obvious as the n is even)
then cout yes if number of odd and even terms are odd
then make pairs of odd,odd  till o-1;
then make pairs of even,even till e-1;
now only one pair is left
so we need to check whether there exists any number x such that
x+1 is also in the array if there exists then cout yes
if no then cout NO :)*/