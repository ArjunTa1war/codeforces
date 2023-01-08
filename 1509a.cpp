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
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
    
        for (int i = 0; i < n; i++)
        {
            if (arr[i]%2==0)
            {
                cout<<arr[i]<<" ";
            }     
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i]%2==1)
            {
                cout<<arr[i]<<" ";
            }            
        }
        cout<<"\n";  
    }
    return 0;
}
/*we are to print an array in such a way that the two consecutive integers gives an integer
when we take avg of them .we know that even + even = odd +odd == even 
other then this the answer is odd
so we need a even  number for making (x)/2 integer
and that's why we need to make the pair of even first
and then all odd :)*/