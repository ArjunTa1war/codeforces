#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n,check = 0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int x = arr[0]%2;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]%2!=x)
            {
               cout<<"NO\n";
               check = 1;
               break;
            }      
        }
        if (check == 0)
        {
            cout<<"YES\n";
        }    
    }
    return 0;
}
/*if all the elements are odd or either all are even 
then only the solution is possible otherwise the answer
will be no
if all are odd and the one is even then also the answer
will be no as all elements in array should have same parity :)*/