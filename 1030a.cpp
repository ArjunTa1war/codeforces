#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i]==1)
        {
            cout<<"HARD";
            return 0;
        }
        
    }
    cout<<"EASY";
    return 0;
}