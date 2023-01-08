#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    int max[101]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        max[arr[i]]++;
    }
    sort(max,max+101);
    cout<<max[100];
    return 0;
}
/*we are to find the maximum number of time a single digit is occuring
as we are to find the number of packets(in each packet no two number with 
same digits can exist)so this is the answer :)*/